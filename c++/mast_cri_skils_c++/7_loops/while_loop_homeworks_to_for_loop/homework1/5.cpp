#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double odd_sum = 0, even_sum = 0;
    int odd_value = 0, even_value = 0;

    int num;

    for (int i = 1; i <= N; ++i)
    {
        cin >> num;    
        if (i % 2 == 0)
            even_sum += num, ++even_value;
        else
            odd_sum += num, ++odd_value;
    }

    cout << odd_sum / odd_value << " " << even_sum / even_value << "\n";

    return 0;
}