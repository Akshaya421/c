#include<stdio.h>
int main() {
	int i,n,pos,arr[10];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements");
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("enter the position for deletion");
	scanf("%d",&pos);
	for(i=pos;i<pos+1; i++) {
		arr[i]=arr[i+1];
	}
	for(i=0;i<n-1; i++) {
		printf("%d",arr[i]);
	} 
	return 0;
}
