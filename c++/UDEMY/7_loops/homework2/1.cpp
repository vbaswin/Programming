#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    #pragma region // above reference line

    int row = 1;
    while (row <= N)
    {
        int space_count = row;
        while (space_count < N)
        {
            cout << " ";
            ++space_count;
        }

        int star_count = 2 * row - 1;
        while (star_count > 0)
        {
            cout << "*";
            --star_count;
        }

        cout << "\n";
        ++row;
    }

    #pragma endregion
    
    #pragma region // below reference line

    int row2 = N;
    while (row2 > 0)
    {
        int space_count_2 = row2;
        while(space_count_2 < N)
        {
            cout << " ";
            ++space_count_2;
        }
        
        int star_count_2 = 2 * row2 - 1;
        while (star_count_2 > 0)
        {
            cout << "*";
            --star_count_2;
        }
        cout << "\n";
        --row2;
    }

    #pragma endregion

    return 0;
}