#include <stdio.h>

struct child {
    char name[10];
    int age;
};

struct parent {
    char father[10];
    char mother[10];
    struct child c1;
};

int main() {
    struct child sonu = {"vb", 20};
    struct parent aswin = {"vinod", "beena", "Aswin", 20};
    
    printf("%s %s %s %d\n", aswin.father, aswin.mother, aswin.c1.name, 
            aswin.c1.age);
// aswin.c1.name if we need to access two structs in a chain manner 
    return 0;
}