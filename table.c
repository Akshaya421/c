#include<stdio.h>
int main() {
	int i, n;
	printf("enter an integer");
	scanf("%d",&n);
	for (i=0; i<=3; ++i)
	{
		printf("%d * %d=%d\n",i,n,i*n);
	}
	return 0;
}
