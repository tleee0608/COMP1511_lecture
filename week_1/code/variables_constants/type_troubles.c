// Some more examples of type troubles

#include <stdio.h>

int main(void) {
    // double is not accurate
    double x = 0.3;
    printf("%lf %lf\n", x, 0.1);
    printf("%.20lf %.20lf\n", x, 0.1);

    // int overflow example
    int y = 2147483647; // maximum value for a 32-bit signed integer
    printf("%d\n", y);
    y = y + 1; // this will cause overflow
    printf("%d\n", y);

    return 0;
}