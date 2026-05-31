// An example declaring and printing variables
// of types int, double and char
// for COMP1511
// written by: tleee
// Date: 31/05/2026

#include <stdio.h>

int main(void) {
    // Declare variables of type int, double
    int years = 3;
    double lab_mark = 1.7;

    printf("years: %d and lab_mark:%lf\n", years, lab_mark);

    // Declare and initialise a char variable
    char grade = 'A';
    printf("grade: %c \n", grade);

    // Modify the double variable
    lab_mark = 1.719312323;

    // Print the double variable with 2 decimal places
    printf("lab_mark: %lf %.2lf\n", lab_mark, lab_mark);

    // how to print a % character?
    // printf("%");
    printf(" to print a %% character\n");
    return 0;
}