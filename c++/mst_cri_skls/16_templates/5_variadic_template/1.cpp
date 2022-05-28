/*
   From fixed to variable # of arguments

   ● Our functions so far has a fixed #number of parameters
       ○ Int sum(int a, int b): 2 parameters of type int
           ■ You can also call sum(2, 3) but 
           not sum(2, 5, 6, 7, 9) which passed 5 arguments
           ■ Can we pass a variable number of arguments?
   ● Modern c++ allows a dynamic usage
       ○ C++11: Initializer list if they are of same type
       ○ C++11: Variadic Template
           ■ Typically provide 2 functions: One is recursive and 
           another is base
       ○ C++17: Fold Expression
           ■ Simpler coding for specific 32 binary operators

    Variadic

    ● The word Variadic is common in different languages
    ● Variadic parameter accepts zero or more values
        ○ Typically: a function may have at most one variadic parameter.
        ○ Typically: The right most parameter
        ○ Usually 3 periods (ellipsis syntax) are used to express it: ...
    ● Variadic functions are functions which take a variable number of arguments
        ○ void printf(const char* fmt ...) - OLD style - UNSAFE typically
    ● Variadic template: A modern & safe way to solve the problem
*/
