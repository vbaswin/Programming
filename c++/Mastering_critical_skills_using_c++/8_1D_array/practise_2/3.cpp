 #include <iostream> 
using namespace std;

int main() {
    int n, numbers[200];
    cin >> n;

    int frequency[151] {0};  // frequency[151]{}; is also possible   // very important part put the entire value of frequency array as 0 to remove the garbage values
    for (int i = 0; i < n; ++i) {                                    // as we are not giving new values to replace the old values but just adding on top of it which 
        cin >> numbers[i];                                           // can cause huge numbers - be very careful
        frequency[numbers[i]]++;
    }

    int max_pos = -1;
    for (int i = 0; i < 151; ++i) {
        if (max_pos == -1 || (frequency[max_pos] < frequency[i]))
            max_pos = i;
    }

    cout << max_pos << " repeated " << frequency[max_pos] << " times \n";

    return 0; 
}