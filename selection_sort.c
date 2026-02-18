#include<stdio.h> 
int main ( ) {
	int i,j,arr[10],temp,minindex,n;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the elements in to an array");
	for (i=0; i<n; i++)  {
		scanf("%d",&arr[i]); }
	for (i=0; i<n-1; i++) {
	 minindex=i;
		for (j=i+1; j<n; j++) {
			if (arr[j] < arr[minindex]) {
				minindex=j; } }
	          temp=arr[minindex];
		arr[minindex]=arr[i];
		arr[i]=temp; }
	printf("the selection sorted array:");
for(i=0; i<n; i++) {
	printf("%d",arr[i]); }
		return 0; }
