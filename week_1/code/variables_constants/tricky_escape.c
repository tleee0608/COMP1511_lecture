// A tricky example with escape characters
// Warning: this may hurt your brain

#include <stdio.h>

int main(void) {
    printf("\\\"\\\n");
    return 0;
}