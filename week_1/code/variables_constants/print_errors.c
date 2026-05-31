// An example declaring and printing variables
// of types int, double and char
// and the kinds of errors you might make
// for COMP1511
// written by: tleee
// Date: 31/05/2026

#include <stdio.h>

int main(void) {
    // int sides;  // we forgot to initialise this variable, so it has a garbage value
    int sides = 4;  // we fix the previous error by initialising the variable to a valid value
    int result = -99;
    // int value = 1.5;    // we try to assign a double value to an int variable
    double value = 1.5;  // we fix the previous error by changing the variable type to double

    printf("A square has %d sides\n", sides);
    printf("The result is %d and the value is %lf\n", result, value);

    return 0;
}