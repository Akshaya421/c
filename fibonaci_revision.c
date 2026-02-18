#include<stdio.h>
int main () {
	int a,b,c,i,n;
	a=0,b=1;
	printf("enter the value");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for (i=0;i<=n; ++i) {
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;

	}
	return 0;
}
