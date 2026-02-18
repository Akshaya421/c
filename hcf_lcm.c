#include<stdio.h>
int main () {
	int i,a,b;
	float HCF;
	printf("enter the a b values");
	scanf("%d%d",&a,&b);
	for (i=1; i<=a && i<=b; i++)
	{
		if (a % i == 0 && b % i == 0) {
			HCF=i;
		}
	printf("HCF=%f\n",HCF);
	}
	return 0;
}
