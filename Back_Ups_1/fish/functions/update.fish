function update --wraps='sudo pacman -Syu' --wraps='sudo pacman -Syyu' --description 'alias update=sudo pacman -Syyu'
  sudo pacman -Syyu $argv; 
end
