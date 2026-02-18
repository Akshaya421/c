#include<stdio.h>
int main () {
	int year,from,to;
	printf("enter the yr from where");
	scanf("%d",&from);
	printf("enter the end yr");
	scanf("%d",&to);
	for (year=from; year<=to; year++)
	{
		if ((year%4==0 && year%100!=0) || (year%400==0) ) {
		printf("%d\n",year); }
	}
	return 0;
}
