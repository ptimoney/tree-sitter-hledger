# tree-sitter-hledger

A [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for [hledger](https://hledger.org/) journal files.

## Features

- Full parsing support for hledger journal syntax
- Transactions with dates, status markers, codes, descriptions, and tags
- Postings with accounts, amounts, costs, and balance assertions
- All major directives: `account`, `commodity`, `payee`, `tag`, `include`, `alias`, `decimal-mark`, `P`, `D`, `Y`, `apply account`
- Line comments (`;`, `#`), block comments, and inline comments with tag support
- Flexible amount formats (commodity before/after, signed amounts, various separators)
- Syntax highlighting and code folding queries included

## Installation

### Node.js

```bash
npm install tree-sitter-hledger
```

```javascript
const Parser = require('tree-sitter');
const hledger = require('tree-sitter-hledger');

const parser = new Parser();
parser.setLanguage(hledger);

const tree = parser.parse(`
2024-01-15 * Grocery Store
    Expenses:Food        $50.00
    Assets:Checking
`);

console.log(tree.rootNode.toString());
```

### Rust

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter = "0.25"
tree-sitter-hledger = { git = "https://github.com/ptimoney/tree-sitter-hledger" }
```

### Python

```bash
pip install tree-sitter-hledger
```

```python
import tree_sitter_hledger as ts_hledger
from tree_sitter import Language, Parser

parser = Parser(Language(ts_hledger.language()))
```

## Supported Syntax

### Transactions

```hledger
2024-01-15 * (CHECK-123) Grocery Store  ; category:food
    Expenses:Food:Groceries     $125.50  ; item:weekly
    Assets:Checking            -$125.50

2024-01-16 ! Pending Payment
    Liabilities:Credit Card     $50.00
    Assets:Cash
```

### Amounts

Various formats are supported:

```hledger
$100.00          ; Symbol before amount
100.00 USD       ; Symbol after amount
-$50             ; Negative with symbol before
$-50             ; Negative with symbol after
€1.000,50        ; European format
10 AAPL @ $150   ; Unit cost
10 AAPL @@ $1500 ; Total cost
$500 = $2500     ; Balance assertion
```

### Directives

```hledger
account Assets:Checking
commodity $1,000.00
payee Whole Foods
tag project
include monthly/january.journal
alias Debit=Assets:Bank:Debit Card
decimal-mark .
P 2024-01-01 EUR $1.10
D $1,000.00
Y 2024
apply account Assets:Checking
```

### Comments

```hledger
; Line comment with semicolon
# Line comment with hash

comment
Multi-line block comment
Can span multiple lines
end comment

2024-01-15 * Purchase  ; inline comment with tag:value
    Expenses:Food  $50  ; receipt:yes, store:walmart
    Assets:Cash
```

## Queries

### Syntax Highlighting

The `queries/highlights.scm` file provides highlighting for:
- Dates, status markers, codes
- Account names, amounts, commodities
- Directives and their arguments
- Comments and tags

### Code Folding

The `queries/folds.scm` file enables folding for:
- Transactions (fold postings)
- Block comments
- Consecutive line comments

## Development

### Building

```bash
npm install
tree-sitter generate   # Generate parser from grammar.js
tree-sitter build      # Build native bindings
```

### Testing

```bash
tree-sitter test       # Run corpus tests
npm test               # Run Node.js binding test
```

### Interactive Development

```bash
npm start              # Opens tree-sitter playground in browser
```

### Test Corpus

Tests are located in `test/corpus/`:
- `transactions.txt` - Transaction parsing
- `directives.txt` - Directive parsing
- `comments.txt` - Comment parsing

## File Types

This grammar recognizes:
- `.journal` files
- `.hledger` files

## Related Projects

- [hledger](https://hledger.org/) - Plain-text accounting software
- [hledger-lsp](https://github.com/ptimoney/hledger-lsp) - Language Server Protocol implementation for hledger
- [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) - Parser generator and incremental parsing library

## License

MIT
