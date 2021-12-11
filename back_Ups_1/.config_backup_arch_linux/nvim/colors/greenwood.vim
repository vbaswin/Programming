" File: greenwood.vim
" Project: GreenWood color scheme
" Maintainer:  Mz
" Version:     2.1
" Last Change: 02-03-2020
" Note:

set background=light
hi clear
if exists("syntax_on")
   syntax reset
endif

let g:colors_name = "greenwood"

" Language group
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
hi Comment           guifg=LightGray      guibg=#005050           gui=none       " Any comment

hi Constant          guifg=Orange         guibg=#005050           gui=none       " Any constant

hi String            guifg=LightMagenta   guibg=#005050           gui=none       " A string constant: "this is a string"
hi Character         guifg=LightMagenta   guibg=#005050           gui=none       " A character constant: 'c', '\n'
hi Number            guifg=Orange         guibg=#005050           gui=none       " A number constant: 234, 0xff
hi Boolean           guifg=Orange         guibg=#005050           gui=none       " A boolean constant: TRUE, false
hi Float             guifg=Orange         guibg=#005050           gui=none       " A floating point constant: 2.3e10

hi Identifier        guifg=LightGreen     guibg=#005050           gui=none       " Any variable name
hi Function          guifg=LightGreen     guibg=#005050           gui=none       " Function name (also: methods for classes)

hi Statement         guifg=LightGreen     guibg=#005050           gui=none       " Any statement
hi Conditional       guifg=LightGreen     guibg=#005050           gui=none       " if, then, else, endif, switch, etc.
hi Repeat            guifg=LightGreen     guibg=#005050           gui=none       " for, do, while, etc.
hi Label             guifg=LightGreen     guibg=#005050           gui=none       " case, default, etc.
hi Operator          guifg=LightGreen     guibg=#005050           gui=none       " "sizeof", "+", "*", etc.
hi Keyword           guifg=LightGreen     guibg=#005050           gui=none       " Any other keyword
hi Exception         guifg=LightGreen     guibg=#005050           gui=none       " try, catch, throw

hi PreProc           guifg=Orange         guibg=#005050           gui=none       " Generic Preprocessor
hi Include           guifg=Orange         guibg=#005050           gui=none       " Preprocessor #include
hi Define            guifg=Orange         guibg=#005050           gui=none       " Preprocessor #define
hi Macro             guifg=Orange         guibg=#005050           gui=none       " Same as Define
hi PreCondit         guifg=Orange         guibg=#005050           gui=none       " Preprocessor #if, #else, #endif, etc.

hi Type              guifg=LightGreen     guibg=#005050           gui=none       " int, long, char, etc.
hi StorageClass      guifg=LightGreen     guibg=#005050           gui=none       " static, register, volatile, etc.
hi Structure         guifg=LightGreen     guibg=#005050           gui=none       " struct, union, enum, etc.
hi Typedef           guifg=LightGreen     guibg=#005050           gui=none       " A typedef

hi Special           guifg=LightGray      guibg=#005050           gui=none       " Any special symbol
hi SpecialChar       guifg=LightGray      guibg=#005050           gui=none       " Special character in a constant
hi Tag               guifg=Yellow         guibg=#005050           gui=none       " You can use CTRL-] on this
hi Delimiter         guifg=LightGray      guibg=#005050           gui=underline  " Character that needs attention
hi SpecialComment    guifg=LightGray      guibg=#005050           gui=none       " Special things inside a comment
hi Debug             guifg=Yellow         guibg=#005050           gui=underline  " Debugging statements

hi Underlined        guifg=White          guibg=#005050           gui=none       " Text that stands out, HTML links
hi Error             guifg=LightRed       guibg=#005050           gui=underline  " Any erroneous construct
hi Todo              guifg=Yellow         guibg=#005050           gui=underline  " Keywords TODO FIXME and XXX

" Vim group
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
hi Normal            guifg=White          guibg=#005050           gui=none

hi ErrorMsg          guifg=Cyan           guibg=#005050           gui=none
hi Visual            guifg=White          guibg=LightRed          gui=none
hi VisualNOS         guifg=White          guibg=#005050           gui=underline
hi Search            guifg=Yellow         guibg=#005050           gui=none
hi IncSearch         guifg=Yellow         guibg=#005050           gui=none

hi ColorColumn                            guibg=#006050           gui=none
hi CursorLine        guifg=White          guibg=#006050           gui=none

hi SpecialKey        guifg=Cyan           guibg=#005050           gui=none
hi Directory         guifg=Cyan           guibg=#005050           gui=none
hi Title             guifg=Magenta        guibg=#005050           gui=none
hi WarningMsg        guifg=Yellow         guibg=#005050           gui=none
hi Question          guifg=Yellow         guibg=#005050           gui=none
hi NonText           guifg=Yellow         guibg=#005050           gui=none

hi StatusLine        guifg=LightBlue      guibg=Grey              gui=none
hi StatusLineNC      guifg=LightBlue      guibg=Grey              gui=none
hi VertSplit         guifg=LightBlue      guibg=Gray              gui=none

hi Folded            guifg=Yellow         guibg=#005050           gui=none
hi FoldColumn        guifg=Yellow         guibg=#005050           gui=none
hi LineNr            guifg=LightRed       guibg=#005050           gui=none

hi DiffAdd           guibg=Yellow         guibg=#005050           gui=none
hi DiffChange        guibg=Yellow         guibg=LightMagenta      gui=none
hi DiffDelete        guifg=Yellow         guibg=#005050           gui=none
hi DiffText          guifg=White          guibg=Red               gui=bold

hi Cursor            guifg=Yellow         guibg=Yellow            gui=none
hi lCursor           guifg=Yellow         guibg=Yellow            gui=none

hi SpellBad          guifg=LightRed       guibg=#005050           gui=underline
hi SpellCap          guifg=LightRed       guibg=#005050           gui=underline
hi SpellLocal        guifg=LightRed       guibg=#005050           gui=underline
hi SpellRare         guifg=LightRed       guibg=#005050           gui=underline

hi Pmenu             guifg=LightRed       guibg=Blue              gui=none
hi PmenuSel          guifg=LightRed       guibg=Blue              gui=none
hi PmenuSbar         guifg=LightBlue      guibg=Blue              gui=none
hi PmenuThumb        guifg=#c0c0c0        guibg=Blue              gui=none
" EOF
