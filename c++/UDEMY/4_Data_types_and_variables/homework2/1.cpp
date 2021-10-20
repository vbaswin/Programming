/*****************************************************
Write a program thata reads 2 variables num1 and num2
Swap the values of num1 and num2
*****************************************************/

#include <iostream>
using namespace std;

int main()
{
    
int numb1,numb2,numb3 ;

cin >>numb1 >>numb2;
numb3 = numb2 ;
numb2 = numb1 ;
numb1 = numb3 ;

cout<< numb1 << " " << numb2 << "\n";
return 0;


}






