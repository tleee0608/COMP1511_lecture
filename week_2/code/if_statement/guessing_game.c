// write a programe guessing_game.c that
// prompts the user enter an integer
// prints out higher, lower. correct if it is equal

// written by tleee
// Date: 03/06/2026

#include <stdio.h>
#define SECRET_NUMBER 42

int main(void) {
    int guess;
    printf("Please enter an integer: ");
    scanf("%d", &guess);

    if (guess == SECRET_NUMBER) {
        printf("Correct!\n");
    } else if (guess < SECRET_NUMBER) {
        printf("Higher!\n");
    } else {
        printf("Lower!\n");
    }

    printf("Game over\n");
    return 0;
}