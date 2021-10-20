/* 
User-defined function 
*/

#include <stdio.h>
int addnumbers(int a, int b);  // function prototype

int main() {
    int n1, n2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    sum = addnumbers(n1, n2);   // function call
    printf("Sum = %d\n", sum);  // n1 & n2 actual parameters - 
    // passed during the function call 
    return 0;   
}

int addnumbers(int a, int b) {  // function definition
// a and b accepts the passed arguments in fn definiton - formal 
// arguments
    int result;             
    result = a + b;
    return result;              // return result
}

/* 
The return statement terminates the execution of a function and
returns a value to the calling function 

The program control is transferred to the calling function after 
the return statement */