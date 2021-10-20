/* 
Declare a union containing 5 string variables (Name, House Name,
City Name, State and Pin code) each with a length of C_SIZE 'user
defined constant. Then, read and display the address of a person
using a variable of the union.
*/

#include <stdio.h>
#define C_SIZE 100

union details {
    char name[C_SIZE], house_name[C_SIZE], city_name[C_SIZE],
    state[C_SIZE], pincode[C_SIZE];
}det[100];

void main() {
    int n;
    printf("Enter the number of persons: ");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("\nEnter the details\nName: ");
        getchar();
        fgets(det[i].name, 100, stdin);
        printf("House name: ");
        scanf("%s",det[i].house_name);
        printf("City name: ");
        scanf("%s",det[i].city_name);
        printf("State: ");
        scanf("%s",det[i].state);
        printf("Pincode: ");
        scanf("%s", det[i].pincode);
    }
    for (int i = 0; i < n; i++) {
        printf("\nDETAILS[%d]\n\tName: ", i+1);
        fputs(det[i].name, stdout);
        printf("\n\tHouse name: %s\n\tCity name: %s\n\tState: %s\n\tPincode: %s"
        ,det[i].house_name, det[i].city_name,
        det[i].state,det[i].pincode);
    }
    printf("\n");
}