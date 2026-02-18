#include<stdio.h>
#define PI 3.14
int main () {
int r;
float a,c;
printf("enter the r value");
scanf("%d",&r);
a=PI*r*r;
printf("the area of the circle:%.2f\n",a);
c=2*PI*r;
printf("circumference of the circle:%.2f",c);
return 0;
}
