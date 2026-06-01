// Write a program odd_even.c that
// prompts the user enter an integer
// prints out whether the number is even or odd

#include <stdio.h>

int main(void) {
    int value;
    printf("Please enter an integer:");
    scanf("%d", &value);

    if (value % 2 == 0) {
        printf("Even!\n");
    } else {
        printf("Odd!\n");
    }

    return 0;
}