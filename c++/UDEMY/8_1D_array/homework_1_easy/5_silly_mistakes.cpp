 #include <iostream>
 using namespace std;

 int main() {
     const int N = 200;
     int n, a[N]; cin >> n;

     for (int i = 0; i < n; ++i)
        cin >> a[i];

    int mn = 1000000;                           // always try to make the code bugless
    bool first_time = true;                 
    for (int i = 0; i < n; ++i) {           
        for (int j = i + 1; j < n; ++j) {       // becareful if we put i < n instead of j < n we get "core jumped error" ALSO j = i + 1 don't forget as the 
            int tmp = a[i] + a[j] + j - i;      // condition given is 1 <= i < j <= N;
            if (first_time || mn > tmp) {
                mn = tmp;
                first_time = false;
            }
        }
    }
    cout << mn << endl;
    return 0;
 }