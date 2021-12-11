set background=dark

set termguicolors

set cursorline

hi clear

if exists("syntax_on")
    syntax reset
endif

let g:colors_name = "vimsub"

hi Normal guibg=#282923
hi NonText guifg=bg
hi comment guifg=#74705D
hi string guifg=#E7DB74
hi number guifg=#AC80FF
hi special guifg=#AC80FF
hi constant guifg=#A6E22A
hi operator guifg=#F8F8F2
hi type guifg=#67D8EF
hi statement guifg=#F92472
hi preproc guifg=#F92472
hi Visual guibg=#48473D
hi StatusLine guifg=#ABB1Ba guibg=#404040
hi LineNr guifg=#90918B
hi CursorLine cterm=NONE guibg=NONE
hi CursorLineNr cterm=NONE guifg=#90918B guibg=#3E3D32

set laststatus=2

set statusline=Line\ %l,\ Column\ %c%=%y
