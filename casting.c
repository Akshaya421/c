#include <stdio.h>
int main() {
    int x;
    float y;
    double z;
     printf("Enter an integer value: ");
    scanf("%d", &x);
    y=x;
    printf("Implicit Conversion: int to Float %.2f\n", x,y);
    z=y;
    printf("Implicit Conversion: Float to Double %.2lf\n", y,z);
    printf("Enter a floating-point value: ");
    scanf("%f", &y);
    x=(int)y;
    printf("Explicit Conversion: Float to Integer %d\n", y,x);
    return 0;
}

