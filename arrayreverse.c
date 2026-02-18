#include<stdio.h>
int main () {
int n,i,a[10];
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the elements in to an array");
for(i=0;i<n;i++)	
{
	scanf("%d",&a[i]);
	}	
printf("\n the values are");
for (i=n-1;i>=0;i--)
{
	printf("%d",a[i]);
	}	
	
	
	
	
}
