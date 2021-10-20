/* 
Problem #3: Transpose

Read integers N, M, then Read matrix NxM. Compute another array, the
transpose

ONE OF THE MOST IMPORTANT NOTE
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
>=> if we are want transpose when cin or transferring to 
    another matrix array then we only need to interchange 
    the inside values ie i and j of eg cin >> arr[i][j];
        ~> if arr[i][j] => normal matrix A
        ~> if arr[j][i] => transpose of that matrix A

>=> if we are want the trnspose when we cout then 
    interchanging will not give the transpose. Here,
    we have to interchange the for loops also interchage the
    inside i and j values
        ~>  for (int i = 0; i < r; i++)    
                for (int j = 0; j < c; j++)
                    cout << arr[i][j]
            ==> normal matrix A

        ~> for (int i = 0; i < c; i++)
                for (int j = 0; j < r; j++)
                    cout << arr[j][i]
            ==> transpose of A
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100][100], trans[100][100];
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n; i++) // we are storing the transpose
        for (int j = 0; j < m; j++)// in another matrix
            trans[j][i] = arr[i][j];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
            cout << trans[j][i] << " ";
        cout << "\n";
    }
    return 0;
}