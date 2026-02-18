#include<stdio.h> 
int main () {
	int i,n,count=0;
	printf("enter an integer:");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	if (n%i==0) {
		count=count+1;
	} }
	if (n==0 || n==1) {
		printf("%d is not a prime",n);
	} else if(count==2) {
		printf("%d is prime",n); }
		else {
			printf("%d is not prime",n);
		}
	return 0;

	
}
