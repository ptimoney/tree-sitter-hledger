; Transaction dates
(date) @keyword.date

; Effective date
(effective_date) @keyword.date

; Status markers
(status) @keyword.modifier

; Transaction codes
(code) @string.special

; Descriptions
(description) @string

; Account names
(account) @type

; Amounts - quantities and commodities
(quantity) @number
(commodity_symbol) @constant

; Amount signs
(sign) @operator

; Directives
"account" @keyword.directive
"commodity" @keyword.directive
"include" @keyword.import
"payee" @keyword.directive
"tag" @keyword.directive

; Directive values
(payee_name) @string
(tag_name) @tag
(file_path) @string.special

; Comments
(comment) @comment

; Operators and punctuation
"=" @operator
"(" @punctuation.bracket
")" @punctuation.bracket
