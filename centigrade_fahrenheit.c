#include<stdio.h>
int main () {
	float c,f;
	printf("enter the temparature in celsius:");
	scanf("%f",&c);
	f=(c*(9/5))+32;
	printf("%f the celsius = %f the farenheit",c,f);
	return 0;
	
}
