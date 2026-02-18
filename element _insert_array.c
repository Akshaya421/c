#include<stdio.h>
int  main () {
	int i,n,pos,value,arr[50];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements : \n");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("enter the position where to insert:");
	scanf("%d",&pos);
	printf("enter the insert value:");
	scanf("%d",&value);
	for (i=pos;i<=n; i++)
	{
		arr[i+1]=arr[i]; }
		arr[pos]=value;
		printf("updated array: ");
		for(i=0;i<n;i++) {
			printf("%d",arr[i]);
		}
	
	return 0;
}
