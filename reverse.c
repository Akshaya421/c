#include<stdio.h>
int main () {
	int rem,n,rev=0;
	printf("enter the value");
	scanf("%d",&n);
	while (n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10; }
	printf("reversed num:%d",rev); 
	return 0;
}
