// Demonstration of infinite while loops
// Typically you do not want an infinite loop!
// Type Ctrl+C to end program

// Written by: tleee
// Date: 03/06/2026

#include <stdio.h>

int main(void) {
    // Change to a while loop
    // while (1) {
    //     printf("I love my COMP1511 lectures!\n");
    // }
    int push_ups = 0;
    while (push_ups < 100) {
        printf("You have done %d push-ups!\n", ++push_ups);
    }
    printf("Congratulations you did %d push-ups", push_ups);



    return 0;
}