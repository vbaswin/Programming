highlight EndOfBuffer ctermfg=DarkGrey ctermbg=black
hi StatusLine ctermbg=Black ctermfg=DarkGrey
hi StatusLineNC ctermbg=Black ctermfg=DarkGrey
highlight VertSplit ctermbg=white ctermfg=DarkGrey

" change the color of tabs
hi TablineFill ctermbg=Black ctermfg=Black
hi Tabline ctermbg=Black ctermfg=DarkGrey
hi Title ctermfg=Black ctermbg=Grey
hi LineNr ctermfg=DarkGrey

" set autosave folds on exit
augroup remember_folds
  autocmd!
  au BufWinLeave ?* mkview 1
  au BufWinEnter ?* silent! loadview 1
augroup END

" change color of folds
hi Folded ctermbg=black ctermfg=DarkGrey

set number
set foldmethod=marker
set foldmarker={,}
set noswapfile
set backupdir=~/.cache/vim
let g:loaded_matchparen=1
syntax off
set nohlsearch
set t_Co=0

set tabstop=4
set softtabstop=4
set shiftwidth=4
set expandtab 

set cindent

autocmd FileType * setlocal formatoptions-=c formatoptions-=r formatoptions-=o
inoremap {<CR> {<CR>}<Esc>O
inoremap << << <Esc>i
inoremap /* /**/<Esc>hi
inoremap /*<CR> /*<CR>*/<Esc><<O
inoremap // // <Esc>a
