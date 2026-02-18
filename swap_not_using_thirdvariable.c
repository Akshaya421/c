#include<stdio.h>
int main () {
	int a,b;
	printf("enter the a,b values before swaapping:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a,b values:a=%d\t b=%d",a,b);
	return 0;
}
