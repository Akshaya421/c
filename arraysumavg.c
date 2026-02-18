#include<stdio.h>
int main() 
{
	int i,n,sum=0,arr[10];
	float avg;
	printf("enter the size of an array");
	scanf("%d",&n);
	
	printf("enter the elements  in to an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	printf("\n The elements of an array");
	for(i=0;i<n;i++) 
	{
	printf("%d",arr[i]); 
	
	sum=sum+arr[i]; }
	avg=(float)sum/n;
	printf("\nsum = %d",sum);
	printf("\navg = %f",avg);
	return 0;
}
