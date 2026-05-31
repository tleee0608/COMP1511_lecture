// An example declaring and printing variables
// of types int, double and char
// for COMP1511
// written by: tleee
// created: 31/05/2026

#include <stdio.h>

int main(void) {
    char initial;
    printf("Enter your first initial: ");
    scanf("%c", &initial);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    double height;
    printf("Enter your height in cm: ");
    scanf("%lf", &height);

    printf("Initial: %c \n Age: %d \n Height: %lf \n", initial, age, height);

    //Complete
    double x;
    double y;
    printf("Enter x and y:");
    // TODO: scanf the values of x and y
    scanf("%lf %lf", &x, &y);
    printf("(%lf %lf) \n", x, y);
    
    // what happens if the user does not type in the right thing ?

    return 0;
}