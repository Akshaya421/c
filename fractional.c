// Write a C program to calculate the following, where x is a fractional value.1-x/2 +x^2/4- x^3/6 .
#include <stdio.h>
#include <math.h>
int main() {
    double x, result;
    // Input a fractional value for x
    printf("Enter a fractional value for x: ");
    scanf("%lf", &x);
    result = 1 - (x / 2) + (pow(x, 2) / 4) - (pow(x, 3) / 6);
        printf("The result of the expression is: %.6lf\n", result);
    return 0;
}

