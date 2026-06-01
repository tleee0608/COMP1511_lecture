// Demonstrate of simple if statement
// with simple condition

// written by: tleee
// Date: 01/06/2026

#include <stdio.h>

int main(void) {
    // Note the indentation
    if (1) {
        printf("Hooray\n");
    }

    if (0) {
        printf("Yay!\n");
    }

    if (4 == 4) {
        printf("I love C Programming\n");
    }

    if ('Z' == 'z') {
        printf("I am cool!\n");
    }
    int x = 5;
    int y = 10;

    if (x < 0) {
        printf("x is negative\n");
    }

    if (y >= x) {
        printf("y is greater than or equal to x\n");
    }

    if (x != y) {
        printf("x and y are not equal\n");
    }
    
    return 0;
}