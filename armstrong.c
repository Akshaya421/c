#include<stdio.h> 
int main () {
	int from,to,i,temp,n,rem,sum;
	printf("enter the range");
	scanf("%d%d",&from,&to);
	printf("armstrong num is\n");
	for (i=from; i<=to; i++) {
		if (i<=n && i>1) {
			printf("%d\n",i);

		sum=0;
		temp=i;}
	while(temp>0) {
	rem=temp%10;
	sum=sum+(rem*rem*rem);
	temp = temp/10; } 
	if (i==sum)
	{
		printf("%d\n",i);
	} }
return 0;
}
