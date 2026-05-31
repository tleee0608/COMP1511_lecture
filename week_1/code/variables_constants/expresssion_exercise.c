// A simple program to demonstrating expressions
// Try to work out what will be printed without running in the program
// This Program was Written by: [Tleee]
// on: [31/05/2026]

#include <stdio.h>

int main(void) {
    int x = 4;
    int y = 3;
    int z = (x + y) * 10 - x;
    printf("The value of z is: %d \n", z);

    char c1 = 'a';
    char c2 = c1 + 1;
    printf("The value of c2 is: %c \n", c2);

    x = 3;
    y = 2;
    z = x / y; // 3/2
    printf("The value of z is: %d \n", z);
    
    x = 3;
    y = 2;
    double w = x / y;
    printf("The value of w is: %lf \n", w);

    x = 3;
    y = 2;
    double v = x / (double) y;
    printf("The value of v is: %lf \n", v);

    return 0;
}