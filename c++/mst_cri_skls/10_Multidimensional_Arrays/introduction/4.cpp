/*
POSITIONAL NEIGHBOURS
---------------------

2 cases either just 4 or 8 surrounding  

Let’s find the relation



                    Up = (r-1, c)
                
Left = (r, c-1)        (r,c)            Right = (r, c+1)
                
                    Down = (r+1, c)     Diagonal: (r+1, c+1)


What is change from (r, c) to the Left?
    ~> (r+1, c): row is changed by +1, col is not changed
What is change from (r, c) to the down?
    ~> (r+1, c): row is not changed, col is changed by -1
We can create 2 arrays to encode these +1/-1/0 changes between 
    locations!
    ~> Some guys call it the DIRECTION ARRAY   
*/