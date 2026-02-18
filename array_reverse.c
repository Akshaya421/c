#include<stdio.h>
int main() {
	int i,n,arr[10];
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter the elements in to an array");
	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("the values are\n");
	for(i=n-1;i>=0;i--) {
		printf("%d",arr[i]);
	}
	return 0;
}
