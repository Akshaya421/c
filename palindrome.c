#include<stdio.h> 
int main() {
	int rem,sum=0,rev=0,n,temp;
	printf("enter a number");
	scanf("%d",&n);
	while (n>0) {
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		rev=rev*10+rem;
	}
	printf("the sum of digits %d\n",sum);
	if(temp==sum) {
		printf("%d it is palindrome");
	} else {
		printf("it not");
	} 
	return 0;
}
