#include <stdio.h>
int main() {
    int x;
    float y;
    double z;
     printf("Enter an integer value: ");
    scanf("%d", &x);
    // Implicit conversion from int to float
    y=x;
    printf("Implicit Conversion: Integer %d to Float %.2f\n", x,y);
    // Implicit conversion from float to double
    z=y;
    printf("Implicit Conversion: Float %.2f to Double %.2lf\n", y,z);
    // Input a floating-point value
    printf("Enter a floating-point value: ");
    scanf("%f", &y);
    // Explicit conversion (casting) from float to int
    x=(int)y;
    printf("Explicit Conversion: Float %.2f to Integer %d\n", y,x);
    return 0;
}

