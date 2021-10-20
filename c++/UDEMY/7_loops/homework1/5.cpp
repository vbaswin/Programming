/****************************************************
Read integer N, followed by reading N numbers. 
Print 2 values
    ~> average of the numbers in the odd positions
    ~> average of the numbers in the even positions

input : 6 10 100 20 200 30 600
output: 20 300
****************************************************/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double odd_sum = 0, even_sum = 0;
    int odd_value = 0, even_value = 0;

    int position = 1;

    while (position <= N)
    {
        double inputs;
        cin >> inputs;

        if (position % 2 ==  0)
            even_sum += inputs, ++even_value;
        else
            odd_sum += inputs, ++odd_value;

        ++position;
    }

    cout << odd_sum/ odd_value << " " << even_sum / even_value << "\n";

    return 0;
}