/*
MULTIDIMENSIONAL ARRAYS
-----------------------

What if we have 5 years. For each year, we have 100 students and 20
subjects? How to represent?
    ~> 5 Arrays, each one is 2D array [100][20]
    ~> Not convenient
C++: double grades[5][100][20];
    ~> 3D array
    ~> grades[2][70][8];
    ~> Grade for the 3rd year, student #71, 9th subject
    ~> This is 2 * 70 * 8 double numbers
You can do bigger arrays
    ~> Int results[10][10][10][10][10][10];
       ■ This is 1000,000 numbers. Be careful. :- so we can run out 
       of memory very fast.
*/