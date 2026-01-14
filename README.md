# tree-sitter-hledger

A [tree-sitter](https://tree-sitter.github.io/) grammar for [hledger](https://hledger.org/) journal files.

## About

This is a standalone tree-sitter parser for hledger's plain text accounting format. It provides fast, incremental syntax parsing suitable for:

- Syntax highlighting in editors (Neovim, Zed, Helix, etc.)
- Code folding and structural navigation
- Building editor integrations
- Analysis and tooling

This parser complements the existing [hledger-lsp](../hledger-lsp) language server by providing syntax-level parsing that can be used independently or integrated into editors that support tree-sitter.

## Features

**Current Support (MVP):**
- Basic transactions (date, status, description, postings)
- Common directives (account, commodity, include, payee, tag)
- Comments (`;` and `#` styles)
- Basic amount parsing (commodity symbols, quantities)
- Indentation-based structure
- Syntax highlighting queries

**Future Enhancements:**
- Balance assertions (`= $100`)
- Cost notation (`@ $1.50`, `@@ $150`)
- Account names with spaces
- Advanced directives (alias, automated transactions)
- Multi-line commodity directives

## Installation

### Using npm

```bash
npm install tree-sitter-hledger
```

### For Neovim (via nvim-treesitter)

Add to your Neovim config:

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.hledger = {
  install_info = {
    url = "https://github.com/ptimoney/tree-sitter-hledger",
    files = { "src/parser.c", "src/scanner.c" },
    branch = "main",
  },
  filetype = "hledger",
}

-- Then run :TSInstall hledger
```

For automatic filetype detection, add to your config:

```lua
vim.filetype.add({
  extension = {
    journal = "hledger",
    hledger = "hledger",
  },
})
```

### For Zed

Add to your Zed `settings.json`:

```json
{
  "languages": {
    "hledger": {
      "language_servers": ["hledger-lsp"],
      "tab_size": 4
    }
  }
}
```

## Usage

### Parse a Journal File

```bash
npx tree-sitter parse examples/simple.journal
```

### Test the Grammar

```bash
npm test
```

### Development

```bash
# Generate parser from grammar
npm run build

# Watch mode for development
npm run watch

# Test parser
npm test
```

## Grammar Overview

The grammar recognizes:

**Transactions:**
```hledger
2024-01-05 * Groceries
    Expenses:Food:Groceries    $50.00
    Assets:Checking
```

**Directives:**
```hledger
account Assets:Checking
commodity $
payee Whole Foods
include expenses.journal
```

**Comments:**
```hledger
; This is a comment
# Another comment style
```

## Syntax Highlighting

The parser includes syntax highlighting queries in `queries/highlights.scm`:

- **Dates** - keyword.date
- **Status markers** (`*`, `!`) - keyword.modifier
- **Account names** - type
- **Amounts** - number (quantity) + constant (commodity)
- **Directives** - keyword.directive / keyword.import
- **Comments** - comment

## Limitations (MVP)

- Account names cannot contain spaces (e.g., `Assets:Savings Account` not yet supported)
- Balance assertions and cost notation are not yet implemented
- Complex amount formats with various spacing may not parse correctly

These limitations will be addressed in future versions.

## Related Projects

- [hledger-lsp](../hledger-lsp) - Language Server Protocol implementation for hledger
- [hledger-vscode](../hledger-vscode) - VS Code extension
- [hledger-nvim](../hledger-nvim) - Neovim plugin

## Development

See [CLAUDE.md](CLAUDE.md) for detailed development guidance.

## License

MIT

## Contributing

Contributions are welcome! Please feel free to submit issues or pull requests.
