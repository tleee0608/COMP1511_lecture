#include <stdio.h>
// define after #include, before main function
#define COLD 10
#define HOT 25

// what test cases should we use?
int main(void) {
    int temperature;
    printf("Enter the temperature: ");
    scanf("%d", &temperature);

    if (temperature <= COLD) {
        printf("I am cold.\n");
    } else if (temperature < HOT) {
        printf("Just right.\n");
    } else {
        printf("I am hot.\n");
    }

    printf("Have a nice day!\n");
    return 0;
}