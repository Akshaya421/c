#include<stdio.h>
int main () {
	int a,b,c;
	printf("enter the a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("a is greatest");
	} else if (b>c && b>a) {
		printf("b is greatest");
	} else {
		printf("c is greatest");
	}
	printf("\n");
	if (a<b && a<c)
	{
		printf("a is smallest");
	} else if (b<c && b<a) {
		printf("b is smallest");
	} else {
		printf("c is smallest");
	}
	return 0;
	
	
}
