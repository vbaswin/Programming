#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // above the reference line

    int row;
    for (row = 1; row <= N; ++row)
    {
        for (int space_count = N - row; space_count > 0; --space_count)
            cout << " ";
        for (int star_count = 2 * row - 1; star_count > 0; --star_count)
            cout << "*";

        cout << "\n";
    }

    // below the reference line

    for (row = N; row > 0; --row)
    {        
        for (int space_count1 = N - row; space_count1 > 0; --space_count1)
            cout << " ";
        for (int star_count1 = 2 * row - 1; star_count1 > 0; --star_count1)
            cout << "*";

        cout << "\n";        
    }

    return 0;
}