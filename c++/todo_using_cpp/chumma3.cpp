#include <iostream> 
using namespace std; 
 
int main(int argc, char** argv) 
{ 
    cout << "Number of command line arguments (argc) entered: " << argc<<endl; 
       
    for (int i = 0; i < argc; ++i) 
        cout <<"argv["<<i<<"] : "<<argv[i] << "\n"; 
       
 
    return 0; 
}
