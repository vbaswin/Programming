/************************************************************************* 
CHAR ARRAY vs STRING

=> Char array is just array, a primitive data type
    -> it is more a C-style
    -> you need to carefully handle the null
=> String is not primitive. It is a class
    -> it is a c++ style
        >> string name{"mustafa"};
    -> it is a part of the STL library
        >> Later we learn it and learn more of c++ string capabilities
    -> it supports a lot of convenient features (eg: name1 + name2) and
        comparisons
    -> please use it. You rarely need to use C-style char array
    
DEFINITIONS

Let say we have string aaabcdefgg

prefix: any string starts from the first character (n prefixes)
    -> a, aa, aaa, aaab, ... aaabcdefgg
suffix: any string starts at the last character (nsuffixes)
    -> g. gg, fgg, efgg, ... aaabcdefgg
substring: starts wherever and ends wherever, but consecutive
    -> eg: of length aaa, aab, abc, cde, def, efg, fgg. Same as substring
sub-sequence: not consecutive but must be in order
    -> in order: next letter must have bigger index
    -> adef, bgg, aeg, cdgg
        - aeg indices 0 5 8
    -> but not: gga, ed, aca
*************************************************************************/