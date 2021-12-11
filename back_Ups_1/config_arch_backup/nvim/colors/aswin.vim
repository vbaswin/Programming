set background=light

set termguicolors

set cursorline 

hi clear

if exists("syntax_on")
   syntax reset
endif                                                                                              
                                                               
let g:colors_name = "greenwood"                                

hi cComment           guifg=LightGray   
hi Constant          guifg=Orange      
hi String            guifg=LightMagenta
hi Character         guifg=LightMagenta
hi Number            guifg=Orange      
hi Boolean           guifg=Orange      
hi Float             guifg=Orange      
hi Identifier        guifg=#FF00FF
hi Function          guifg=LightGreen  
hi Statement         guifg=LightGreen  
hi Conditional       guifg= #8F00FF  
hi Repeat            guifg=LightGreen  
hi Label             guifg=LightGreen  
hi Operator          guifg=blue
hi Keyword           guifg=#A020F0  
hi Exception         guifg=LightGreen  
hi PreProc           guifg=Orange      
hi Include           guifg=Orange      
hi Define            guifg=Orange      
hi Macro             guifg=Orange      
hi PreCondit         guifg=Orange      
hi Type              guifg=LightGreen  
hi StorageClass      guifg=LightGreen  
hi Structure         guifg=LightGreen  
hi Typedef           guifg=LightGreen  
hi Special           guifg=LightGray   
hi SpecialChar       guifg=LightGray   
hi Tag               guifg=Yellow      
hi Delimiter         guifg=LightGray   
hi SpecialComment    guifg=LightGray   
hi Debug             guifg=Yellow      
hi Underlined        guifg=White       
hi Error             guifg=LightRed    
hi Todo              guifg=Yellow      

hi  CursorLine cterm=NONE guibg=NONE
hi ErrorMsg          guifg=Cyan        
hi Visual            guifg=White       
hi VisualNOS         guifg=White       
hi Search            guifg=Yellow      
hi IncSearch         guifg=Yellow      


hi SpecialKey        guifg=Cyan        
hi Directory         guifg=Cyan        
hi Title             guifg=Magenta     
hi WarningMsg        guifg=Yellow      
hi Question          guifg=Yellow      
hi NonText           guifg=Yellow      

hi StatusLine        guifg=#21252B     
hi StatusLineNC      guifg=LightBlue   
hi VertSplit         guifg=LightBlue   

hi Folded            guifg=Yellow      
hi FoldColumn        guifg=Yellow      
hi LineNr            guifg=LightRed    

hi DiffAdd           guibg=Yellow      
hi DiffChange        guibg=Yellow      
hi DiffDelete        guifg=Yellow      
hi DiffText          guifg=White       

hi Cursor            guifg=Yellow      
hi lCursor           guifg=Yellow      

hi SpellBad          guifg=LightRed    
hi SpellCap          guifg=LightRed    
hi SpellLocal        guifg=LightRed    
hi SpellRare         guifg=LightRed    

hi Pmenu             guifg=LightRed    
hi PmenuSel          guifg=LightRed    
hi PmenuSbar         guifg=LightBlue   
hi PmenuThumb        guifg=#c0c0c0     
set laststatus=2

set statusline=Line\ %l,\ Column\ %c%=%y
