// Demonstration of error checking using the return value of scanf

// written by: tleee
// Date: 03/06/2025

#include <stdio.h>

int main(void) {
    int x;
    int y;
    int inputs_read = scanf("%d %d", &x, &y);
    printf("%d inputs\n", inputs_read);

    if (inputs_read == 2) {
        printf("%d %d\n", x, y);
    } else {
        printf("Incorrect usage\n");
    }

    return 0;
}