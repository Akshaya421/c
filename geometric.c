// Write a C program to read in two numbers, x and n, and then compute the sum of this geometric progression: 1+x+x^2+x^3+ +x^n. For example: if n is 3 and x is 5, then the program computes 1+5+25+125.
#include <stdio.h>
#include <math.h>
int main() {
    double x, sum = 0.0;
    int n;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n (must be a positive integer): ");
    scanf("%d", &n);
        if (n < 0)
   {
        printf("Error: n must be a positive integer.\n");
        return 1;
    }
    // Calculate the sum of the geometric progression
    for (int i = 0; i <= n; i++) {
        sum =sum+ pow(x, i); 
    }
    // Display the result
    printf("The sum of the geometric progression is: %.6lf\n", sum);
    return 0;
}


