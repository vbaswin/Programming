source $HOME/.config/nvim/vim-plug/plugins.vim
Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}
highlight EndOfBuffer ctermfg=white ctermbg=black
hi StatusLine ctermbg=Black ctermfg=Grey
hi StatusLineNC ctermbg=Black ctermfg=DarkGrey
highlight VertSplit ctermbg=white ctermfg=DarkGrey
set noswapfile
set backupdir=~/.cache/vim
set tabstop=4
set expandtab
set shiftwidth=4
let g:loaded_matchparen=1
syntax off
set nohlsearch
set t_Co=0

let @j = "ok"
let @k = "Oj"
nnoremap <leader>ff <cmd>Telescope find_files<cr>
nnoremap <leader>fg <cmd>Telescope live_grep<cr>
nnoremap <leader>fb <cmd>Telescope buffers<cr>
nnoremap <leader>fh <cmd>Telescope help_tags<cr>
