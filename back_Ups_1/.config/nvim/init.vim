source $HOME/.config/nvim/vim-plug/plugins.vim

highlight EndOfBuffer ctermfg=white ctermbg=black
hi StatusLine ctermbg=Black ctermfg=Grey
hi StatusLineNC ctermbg=Black ctermfg=DarkGrey
highlight VertSplit ctermbg=white ctermfg=DarkGrey

hi TablineFill ctermbg=Black ctermfg=Black
hi Tabline ctermbg=Black ctermfg=DarkGrey
hi Title ctermfg=Red ctermbg=Blue

set noswapfile
set backupdir=~/.cache/vim
set tabstop=4
let g:loaded_matchparen=1
syntax off
set nohlsearch
set t_Co=0
set expandtab
set shiftwidth=4

let @j = "ok"
let @k = "Oj"
nnoremap <leader>ff <cmd>Telescope find_files<cr>
nnoremap <leader>fg <cmd>Telescope live_grep<cr>
nnoremap <leader>fb <cmd>Telescope buffers<cr>
nnoremap <leader>fh <cmd>Telescope help_tags<cr>


lua << EOF
require('telescope').setup{
    defaults = {
    },
    extensions = {
    fzf = {
      fuzzy = true,                    -- false will only do exact matching
      override_generic_sorter = true,  -- override the generic sorter
      override_file_sorter = true,     -- override the file sorter
      case_mode = "smart_case",        -- or "ignore_case" or "respect_case"
                                       -- the default case_mode is "smart_case"
    }
  }
}
require('telescope').load_extension('fzf')
EOF
