/*
    Objects   

    aggregate class;
    public/No constructore/no virual/inheritance/no in-class initializers

    Simple informal rules of initialization

    Forgot to initialize ⇒ Default initialization
        Primitive ⇒ Garbage
        Struct object ⇒ Default constructor

    Initialized with something? {blabla} (blabla)
        Using =     ⇒ Copy initialization (ok for primitives, slow otherwise)
        Without =   ⇒ Direct initialization (MORE EFFICIENT)

    Initialized without something? {} ()
        Primitive ⇒ zero-initialization
        Struct object ⇒ Default constructor
*/

#include <iostream>
using namespace std;

struct Employee {
    int id;         // Default initialization = garbage
    string name;    // Default initialization => call constructor = ""
};

int main() {
    Employee e1;    // Default initialization
    Employee e2();  // FUNCTION // warning
    Employee e3{};  // value initialization

    // temporary object with () 
    // or {} => value initialization
    Employee(); 
    Employee{};

    Employee e4 {10, "Mustafa"};                // Aggregate initialization
    char arr5[] {'h', 'e', 'l', 'l', 'o'};      // Aggregate initialization

    return 0;
}


