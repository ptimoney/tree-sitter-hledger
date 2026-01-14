# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working on the tree-sitter-hledger parser.

## Project Overview

This is a tree-sitter grammar for hledger journal files. Tree-sitter is a parser generator tool that builds fast, incremental parsers for use in text editors and other tools requiring syntax analysis.

**Key Features:**
- Fast, incremental parsing
- Syntax highlighting support
- Code folding and navigation
- Editor-agnostic (works with any tree-sitter-compatible editor)

**Current Status:** Minimal Viable Parser (MVP)
- Supports basic transactions, common directives, comments
- External scanner handles indentation tracking
- Syntax highlighting queries included

## Project Structure

```
tree-sitter-hledger/
├── grammar.js              # Core grammar definition
├── src/
│   ├── parser.c           # Generated parser (do not edit)
│   ├── scanner.c          # External scanner (C code)
│   ├── grammar.json       # Generated grammar metadata
│   └── tree_sitter/       # Generated support files
├── queries/
│   ├── highlights.scm     # Syntax highlighting rules
│   └── folds.scm          # Code folding rules
├── test/
│   └── corpus/            # Test cases in tree-sitter format
│       ├── transactions.txt
│       ├── directives.txt
│       └── comments.txt
├── examples/              # Example journal files
│   └── simple.journal
├── package.json           # npm configuration
└── binding.gyp            # Native module binding config
```

## Development Workflow

### Making Grammar Changes

1. **Edit `grammar.js`**
   - Modify grammar rules
   - Add new syntax constructs
   - Adjust precedence or token definitions

2. **Regenerate parser**
   ```bash
   npm run build  # or: npx tree-sitter generate
   ```

3. **Test changes**
   ```bash
   npm test  # Run test corpus
   npx tree-sitter parse examples/simple.journal  # Test on example file
   ```

4. **Iterate**
   - Fix any conflicts reported by tree-sitter
   - Update test cases if expectations change
   - Test with real journal files

### Testing

**Test Format (test/corpus/*.txt):**
```
=====================================
Test name
=====================================

<input journal syntax>

---

<expected parse tree>
```

**Running Tests:**
```bash
npm test                    # All tests
npx tree-sitter test        # Same as above
npx tree-sitter test --debug   # Verbose output
```

**Visual Testing:**
```bash
npx tree-sitter parse examples/simple.journal
```

### Working with the External Scanner

The external scanner (`src/scanner.c`) handles:
- **Indentation tracking** - Emits INDENT/DEDENT tokens
- **Newline normalization** - Handles LF, CR, CRLF
- **State management** - Maintains indent stack across parses

**Key Functions:**
- `tree_sitter_hledger_external_scanner_create()` - Initialize
- `tree_sitter_hledger_external_scanner_scan()` - Main parsing logic
- `tree_sitter_hledger_external_scanner_serialize()` - Save state
- `tree_sitter_hledger_external_scanner_deserialize()` - Restore state

**When to Modify:**
- Adding new indentation-sensitive constructs
- Changing how newlines are handled
- Adding context-sensitive token recognition

**Important:** After modifying scanner.c, you must regenerate the parser.

## Grammar Architecture

### Core Rules

**Source File:**
```javascript
source_file: $ => repeat($._item)
_item: $ => choice($.transaction, $.directive, $.comment, $._blank_line)
```

**Transaction Structure:**
```javascript
transaction: $ => seq(
  $.transaction_header,
  $.indent,           // From external scanner
  repeat1(choice(
    $.posting,
    $.comment,
  )),
  $.dedent,           // From external scanner
)
```

**Directives:**
- `account_directive`
- `commodity_directive`
- `include_directive`
- `payee_directive`
- `tag_directive`

### Token Precedence

**Status markers** have high precedence to ensure `*` and `!` are recognized as status, not description:
```javascript
status: $ => token(prec(1, choice('*', '!'))),
```

### External Tokens

Defined in `externals: $ => [...]`:
- `$.indent` - Indentation increase
- `$.dedent` - Indentation decrease
- `$._newline` - Line ending

### Regex Patterns

**Constraints:**
- Tree-sitter regexes DO NOT support lookahead/lookbehind
- Use character classes and negation instead
- Example: `/[^\s;#\n]+/` matches account names

**Common Patterns:**
- Date: `/\d{4}[-\/]\d{2}[-\/]\d{2}/`
- Account: `/[^\s;#\n]+/` (simplified for MVP)
- Quantity: `/\d[\d., \t]*/` (excludes newlines)
- Comment: `/[;#][^\n]*/`

## Known Limitations (MVP)

### Account Names
**Current:** No spaces allowed (`Assets:Checking` ✓, `Assets:Savings Account` ✗)

**Reason:** Distinguishing between account and amount requires lookahead, which tree-sitter regexes don't support

**Future Solution:** Use external scanner to detect amount start and properly terminate account parsing

### Amount Parsing
**Current:** Basic support for common formats (`$100`, `100 USD`)

**Missing:**
- Balance assertions (`= $500`)
- Cost notation (`@ $1.50`, `@@ $150`)
- Complex spacing variants (`$ -100`, `- $100`)

**Future:** Add these as grammar extensions after MVP validation

### Indentation
**Current:** Tab = 8 spaces (hardcoded in scanner)

**Future:** Make configurable via grammar configuration

## Debugging Tips

### Parser Conflicts

If `tree-sitter generate` reports conflicts:

1. **Check conflict details:**
   ```bash
   npx tree-sitter generate --log
   ```

2. **Common causes:**
   - Ambiguous grammar rules
   - Missing precedence declarations
   - Overlapping regex patterns

3. **Solutions:**
   - Use `prec()` or `prec.left()` / `prec.right()`
   - Make regexes more specific
   - Use external scanner for complex cases

### Parse Errors

If test files don't parse correctly:

1. **Visualize parse tree:**
   ```bash
   npx tree-sitter parse test/corpus/transactions.txt
   ```

2. **Check for:**
   - Missing DEDENT tokens (scanner issue)
   - Greedy regexes consuming too much
   - Incorrect field names in expectations

3. **Debug scanner:**
   - Add `printf` statements to scanner.c
   - Rebuild and test: `npm run build && npm test`

### Test Failures

If test expectations don't match actual output:

1. **Compare carefully:**
   - Tree-sitter shows expected (green) vs actual (red)
   - Check for field name differences (`name:` vs no field)
   - Look for extra/missing wrapper nodes

2. **Update expectations:**
   - Copy actual output from test failure
   - Verify it's correct by inspecting parse tree
   - Update test corpus file

## Syntax Highlighting

### Query Format (queries/highlights.scm)

Scheme-like syntax for pattern matching:

```scheme
; Match a node and assign highlight group
(date) @keyword.date

; Match with field name
(description) @string

; Match string literals
"account" @keyword.directive

; Match choice of operators
["=" "("] @operator
```

### Common Highlight Groups

- `@keyword.date` - Dates
- `@keyword.modifier` - Status markers
- `@keyword.directive` - Directive keywords
- `@string` - Descriptions, text
- `@type` - Account names
- `@number` - Quantities
- `@constant` - Commodity symbols
- `@comment` - Comments
- `@operator` - Operators, punctuation

### Testing Highlights in Neovim

```lua
:TSHighlightCapturesUnderCursor  -- Show highlight groups at cursor
:TSPlaygroundToggle              -- Interactive syntax tree viewer (requires nvim-treesitter/playground)
```

## Integration with hledger-lsp

The tree-sitter parser and hledger-lsp serve different purposes:

**tree-sitter-hledger:**
- Fast syntax parsing for highlighting
- Structural navigation (folding, text objects)
- No semantic analysis
- Works offline, no file I/O

**hledger-lsp:**
- Semantic features (completion, validation, hover)
- Multi-file support (include resolution)
- Balance calculations, amount inference
- LSP protocol integration

**Potential Future Integration:**
- hledger-nvim could use tree-sitter for initial highlighting
- Then upgrade to LSP semantic tokens for semantic accuracy
- Best of both worlds: fast startup + semantic richness

## Future Enhancements

### High Priority
1. **Account names with spaces** - Use external scanner for better parsing
2. **Balance assertions** - Grammar extension: `posting: seq(account, amount, optional(assertion))`
3. **Cost notation** - Grammar extension: `amount: seq(quantity, commodity, optional(cost))`

### Medium Priority
4. **Better error recovery** - Add `ERROR` production rules
5. **Performance testing** - Benchmark on large journal files (10k+ transactions)
6. **Multi-line commodities** - Handle `commodity\n  format` blocks

### Low Priority
7. **Automated transaction rules** - `= QUERY` syntax
8. **Periodic transactions** - `~ PERIOD` syntax
9. **Tags in comments** - Parse `key:value` pairs

## Contributing Guidelines

When adding features:

1. **Start with grammar.js** - Define the syntax structure
2. **Add test cases** - Create corpus tests before implementing
3. **Test incrementally** - Generate and test after each change
4. **Update queries** - Add highlighting for new constructs
5. **Document limitations** - Note any edge cases or restrictions
6. **Maintain MVP scope** - Keep it focused and functional

## References

- [Tree-sitter Documentation](https://tree-sitter.github.io/tree-sitter/)
- [Tree-sitter Grammar Development](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [hledger Journal Format](https://hledger.org/hledger.html#journal)
- [tree-sitter-python](https://github.com/tree-sitter/tree-sitter-python) - Good example of indentation handling
