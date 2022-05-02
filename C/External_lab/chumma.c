#include <stdio.h>
#include <stdbool.h>

void search(bool *result) {
    *result = true;
}

int main() {
    bool result = false;
    search(&result);
    printf(result? "true" : "false");
    return 0;
}
