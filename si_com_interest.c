#include<stdio.h>
#include<math.h>
int main () {
	int p,t,r;
	float si,c;
	printf("enter the p t r values");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	printf("the simple interst is : %.2f",si);
	c=(p*((1+r/100)^t))-p;
	printf("the compound interst is : %.2f",c);

	
	return 0; }
