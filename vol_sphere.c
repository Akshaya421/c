#include<stdio.h>
#define PI 3.14
int main ()
{
	int r;
	float a,c,v;
	printf("enter the r value\n");
	scanf("%d",&r);
	a=4*PI*r*r;
	printf("the area of sphere : %.2f\n",a);
	c=2*PI*r;
    printf("the circumference of sphere : %.2f\n",c);
    v=(4*PI*r*r*r)/3;
    printf("the volume of sphere : %.2f",v);
	return 0;
	
}
