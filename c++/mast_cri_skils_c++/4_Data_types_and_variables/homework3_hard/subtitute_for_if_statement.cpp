/*****************************
Read 2 integers A, B
    => B is either -1 or 1
        * if -1, print 2*A + 1
        * if 1, print A*A
*****************************/

#include <iostream>
using namespace std;

int main()
{
    //  if b is
    //   1 , print a*a 
    //  -1 , print 2*a+1
    

    int a,b;

    cin >> a >> b ;
    
    int b_1     = a * a    ;
    int b_neg_1 = 2 * a + 1;

    //  assign the conditions to b
    //  by changing the range from [-1,1] to [0,1]

    int if_1     = (b+1)/2 ;
    int if_neg_1 = 1 - if_1 ;

    cout << if_1 * b_1 + if_neg_1 * b_neg_1 << "\n";

    return 0;

}