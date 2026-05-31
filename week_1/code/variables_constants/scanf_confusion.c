// An example declaring and printing variables
// of types int, double and char
// for COMP1511
// written by: tleee
// created: 31/05/2026

#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    double height;
    printf("Enter your height in cm: ");
    scanf("%lf", &height);

    char initial;
    printf("Enter your first initial: ");
    // scanf("%c", &initial);

    // we printf a newline but skip the newline in the input buffer
    // this is because scanf("%d", &age) and scanf("%lf", &height) 
    // will leave a newline in the input buffer after reading the number
    // so we need to skip the newline before reading the char
    // we can do this by adding a space before %c in the scanf format string
    // this will tell scanf to skip any whitespace characters 
    // (including the newline) before reading the char
    // so we change scanf("%c", &initial); to scanf(" %c", &initial);
    scanf(" %c", &initial);
    printf("Age: %d \nHeight: %lf \nInitial: %c \n ", age, height, initial);


    return 0;
}