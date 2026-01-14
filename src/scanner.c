#include <tree_sitter/parser.h>
#include <wctype.h>
#include <string.h>
#include <stdio.h>

enum TokenType {
  INDENT,
  DEDENT,
  NEWLINE,
};

// Scanner state
typedef struct {
  uint32_t *indent_stack;
  uint32_t indent_stack_size;
  uint32_t indent_stack_capacity;
} Scanner;

// Initialize scanner
void *tree_sitter_hledger_external_scanner_create() {
  Scanner *scanner = (Scanner *)calloc(1, sizeof(Scanner));
  scanner->indent_stack_capacity = 8;
  scanner->indent_stack = (uint32_t *)calloc(scanner->indent_stack_capacity, sizeof(uint32_t));
  scanner->indent_stack_size = 1;
  scanner->indent_stack[0] = 0; // Base indentation level
  return scanner;
}

// Destroy scanner
void tree_sitter_hledger_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  if (scanner->indent_stack) {
    free(scanner->indent_stack);
  }
  free(scanner);
}

// Serialize scanner state
unsigned tree_sitter_hledger_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  unsigned size = 0;

  // Store indent stack size (max 255 levels)
  if (scanner->indent_stack_size > 255) {
    scanner->indent_stack_size = 255;
  }
  buffer[size++] = (char)scanner->indent_stack_size;

  // Store indent levels (each as 4 bytes)
  for (unsigned i = 0; i < scanner->indent_stack_size && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE - 4; i++) {
    buffer[size++] = (scanner->indent_stack[i] >> 24) & 0xFF;
    buffer[size++] = (scanner->indent_stack[i] >> 16) & 0xFF;
    buffer[size++] = (scanner->indent_stack[i] >> 8) & 0xFF;
    buffer[size++] = scanner->indent_stack[i] & 0xFF;
  }

  return size;
}

// Deserialize scanner state
void tree_sitter_hledger_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  scanner->indent_stack_size = 0;

  if (length == 0) {
    scanner->indent_stack_size = 1;
    scanner->indent_stack[0] = 0;
    return;
  }

  // Read indent stack size
  scanner->indent_stack_size = (unsigned char)buffer[0];
  unsigned size = 1;

  // Read indent levels
  for (unsigned i = 0; i < scanner->indent_stack_size && size + 3 < length; i++) {
    scanner->indent_stack[i] =
      ((unsigned char)buffer[size] << 24) |
      ((unsigned char)buffer[size + 1] << 16) |
      ((unsigned char)buffer[size + 2] << 8) |
      ((unsigned char)buffer[size + 3]);
    size += 4;
  }

  if (scanner->indent_stack_size == 0) {
    scanner->indent_stack_size = 1;
    scanner->indent_stack[0] = 0;
  }
}

// Push indent level onto stack
static void push_indent(Scanner *scanner, uint32_t indent) {
  if (scanner->indent_stack_size >= scanner->indent_stack_capacity) {
    scanner->indent_stack_capacity *= 2;
    scanner->indent_stack = (uint32_t *)realloc(
      scanner->indent_stack,
      scanner->indent_stack_capacity * sizeof(uint32_t)
    );
  }
  scanner->indent_stack[scanner->indent_stack_size++] = indent;
}

// Pop indent level from stack
static uint32_t pop_indent(Scanner *scanner) {
  if (scanner->indent_stack_size > 1) {
    return scanner->indent_stack[--scanner->indent_stack_size];
  }
  return 0;
}

// Get current indent level
static uint32_t current_indent(Scanner *scanner) {
  if (scanner->indent_stack_size > 0) {
    return scanner->indent_stack[scanner->indent_stack_size - 1];
  }
  return 0;
}

// Scan for tokens
bool tree_sitter_hledger_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  Scanner *scanner = (Scanner *)payload;

  // Handle NEWLINE
  if (valid_symbols[NEWLINE]) {
    lexer->result_symbol = NEWLINE;

    // Skip any spaces/tabs before newline
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      lexer->advance(lexer, true);
    }

    // Check for newline (LF, CR, or CRLF)
    if (lexer->lookahead == '\n') {
      lexer->advance(lexer, false);
      return true;
    }
    if (lexer->lookahead == '\r') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);
      }
      return true;
    }
  }

  // Handle INDENT/DEDENT at start of line
  if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
    // Skip any leading whitespace and calculate indentation
    uint32_t indent_level = 0;

    for (;;) {
      if (lexer->lookahead == ' ') {
        indent_level++;
        lexer->advance(lexer, true);
      } else if (lexer->lookahead == '\t') {
        indent_level += 8; // Tab = 8 spaces
        lexer->advance(lexer, true);
      } else {
        break;
      }
    }

    uint32_t current = current_indent(scanner);

    // Check for DEDENT before skipping blank lines/EOF
    // This allows proper dedentation at end of file or before blank lines
    if (indent_level < current && valid_symbols[DEDENT]) {
      // Check if we're at a blank line, comment, or EOF
      if (lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
          lexer->lookahead == ';' || lexer->lookahead == '#' ||
          lexer->eof(lexer)) {
        pop_indent(scanner);
        lexer->result_symbol = DEDENT;
        return true;
      }
    }

    // Skip blank lines and lines with only comments
    if (lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
        lexer->lookahead == ';' || lexer->lookahead == '#' ||
        lexer->eof(lexer)) {
      return false;
    }

    // INDENT: indentation increased
    if (indent_level > current && valid_symbols[INDENT]) {
      push_indent(scanner, indent_level);
      lexer->result_symbol = INDENT;
      return true;
    }

    // DEDENT: indentation decreased (non-blank line case)
    if (indent_level < current && valid_symbols[DEDENT]) {
      pop_indent(scanner);
      lexer->result_symbol = DEDENT;
      return true;
    }
  }

  return false;
}
