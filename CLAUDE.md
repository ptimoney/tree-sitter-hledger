# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a Tree-sitter grammar for hledger journal files (`.journal`, `.hledger`). It provides parsing support for the hledger plain-text accounting format, used by the `hledger-lsp` language server in the parent monorepo.

## Build and Test Commands

```bash
npm install                    # Install dependencies
npm run build                  # Alias: tree-sitter generate && tree-sitter build
tree-sitter generate           # Generate parser from grammar.js
tree-sitter build              # Build native bindings
tree-sitter test               # Run corpus tests (test/corpus/*.txt)
npm test                       # Run Node.js binding test
tree-sitter playground         # Interactive web playground (runs prestart first)
```

For development iteration:
```bash
tree-sitter generate && tree-sitter test   # Regenerate and test
```

## Architecture

### Core Files

- **grammar.js** - The grammar definition. Defines all parsing rules for hledger syntax including transactions, postings, directives, comments, and amounts.

- **src/scanner.c** - External scanner handling indentation-sensitive parsing. Manages INDENT, DEDENT, and NEWLINE tokens via an indent stack. This is critical because hledger uses indentation to delimit transaction postings.

- **src/parser.c** - Auto-generated parser (do not edit directly).

### Language Bindings

The `bindings/` directory contains generated bindings for multiple languages:
- `node/` - Node.js (primary for hledger-lsp integration)
- `rust/`, `python/`, `go/`, `c/`, `swift/`

### Query Files

- **queries/highlights.scm** - Syntax highlighting queries
- **queries/folds.scm** - Code folding queries

### Test Corpus

Tests are in `test/corpus/` using tree-sitter's test format:
- `transactions.txt` - Transaction parsing tests
- `directives.txt` - Directive parsing tests
- `comments.txt` - Comment parsing tests

## Grammar Structure

The grammar parses these main constructs:

**Transactions**: date + optional status/code + description, followed by indented postings
```
2024-01-05 * (CHECK-123) Description  ; comment
    Account:Name        $100.00  ; tag:value
    Other:Account
```

**Directives**: `account`, `commodity`, `payee`, `tag`, `include`, `alias`, `decimal-mark`, `P` (market price), `D` (default commodity), `Y` (default year), `apply account`

**Comments**: Line comments (`;` or `#`), block comments (`comment`...`end comment`), inline comments on transactions/postings

**Amounts**: Flexible format supporting commodity before/after quantity, signed amounts, costs (`@`/`@@`), and balance assertions (`=`)

## External Scanner Details

The scanner in `src/scanner.c` is essential for correct parsing:

- Tracks indentation via a stack (tabs count as 8 spaces)
- Emits INDENT when indentation increases (entering transaction body)
- Emits DEDENT when indentation decreases (leaving transaction body)
- Handles NEWLINE tokens to control line boundaries
- Properly handles blank lines and comments within indented blocks

When modifying grammar rules involving transactions or postings, ensure the indentation logic in the scanner remains consistent.

## Relationship to hledger-lsp

This grammar is used by `hledger-lsp` (sibling project in the parent directory) for parsing journal files. Changes here affect the language server's parsing behavior. After making changes:

1. Run `tree-sitter generate && tree-sitter test` to verify
2. Rebuild hledger-lsp to pick up grammar changes
