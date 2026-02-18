#include<stdio.h> 
int area(); //area and circumference of circle
int circumference();
int main () {
	area();
	circumference();
	return 0;
}
area() {
	int a,r;
	printf("enter the r value:");
	scanf("%d",&r);
	a=3.14*r*r;
	printf("area of circle:%d\n",a);
}
circumference() {
	int c,r;
	printf("enter the r value:");
	scanf("%d",&r);
	c=2*3.14*r;
	printf("circumference of circle:%d\n",c);
}
