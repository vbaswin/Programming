function t --wraps='cd ~/todo_using_cpp/todo.sh' --wraps='bash ~/todo_using_cpp/todo.sh' --description 'alias t=bash ~/todo_using_cpp/todo.sh'
  bash ~/todo_using_cpp/todo.sh $argv; 
end
