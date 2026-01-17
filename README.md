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

**Transactions:**

- Dates with flexible formats (`2024-01-15`, `2024.1.5`, `01/15`, `1-5`)
- Status markers (`*` cleared, `!` pending)
- Transaction codes (`(#123)`)
- Descriptions
- Inline comments with tags (`; category:food, project:home`)

**Postings:**

- Account names (including spaces)
- Amounts with various formats:
  - Symbol on left: `$100`, `-$50`, `$-25`
  - Symbol on right: `100 USD`, `-50 EUR`
  - No symbol: `100`, `-50.00`
- Cost notation: `@ $1.50` (unit cost), `@@ $150` (total cost)
- Balance assertions: `= $1000`
- Inline comments with tags

**Commodities:**

- Currency symbols: `$`, `€`, `£`, `¥`, etc.
- Alphabetic codes: `USD`, `EUR`, `BTC`
- Quoted symbols: `"AAPL US Equity"`

**Directives:**

- `account` - Account declarations
- `commodity` - Commodity declarations
- `include` - File includes
- `payee` - Payee declarations
- `tag` - Tag declarations

**Comments:**

- Line comments: `;` or `#`
- Block comments: `comment` ... `end comment`
- Inline comments with tag parsing

**Structure:**

- Indentation-based posting blocks
- Code folding support
- Syntax highlighting queries

## Future Enhancements

- Automated transaction rules (`=`)
- Periodic transactions (`~`)
- Additional directives (alias, apply account, etc.)
- Multi-line commodity format blocks

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

# Test parser
npm test
```

## Grammar Overview

**Transactions:**

```hledger
2024-01-05 * Groceries  ; category:food
    Expenses:Food:Groceries    $50.00
    Assets:Checking           -$50.00  ; cleared:yes
```

**Costs and Assertions:**

```hledger
2024-01-10 * Currency Exchange
    Assets:EUR    100 EUR @ $1.10
    Assets:USD   -$110.00 = $500.00
```

**Directives:**

```hledger
account Assets:Checking
commodity $1000.00
payee Whole Foods
include expenses.journal
```

**Comments:**

```hledger
; Line comment
# Another style

comment
This is a block comment.
Multiple lines are supported.
end comment
```

## Syntax Highlighting

The parser includes syntax highlighting queries in `queries/highlights.scm`:

| Element | Highlight Group |
|---------|----------------|
| Dates | `@keyword.date` |
| Status markers (`*`, `!`) | `@keyword.modifier` |
| Account names | `@type` |
| Quantities | `@number` |
| Commodities | `@constant` |
| Directives | `@keyword.directive` |
| Comments | `@comment` |
| Tags | `@tag` / `@property` |
| Operators (`@`, `=`) | `@operator` |

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
