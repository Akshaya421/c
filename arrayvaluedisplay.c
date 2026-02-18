#include<stdio.h>
int main() {
int i,n,a[10];
printf(" enter the size of an array");
scanf("%d",&n);
printf("enter the elements in to an array");
for(i=0;i<n;i++)
 {
	scanf("%d",&a[i]);
	 }
	printf("\nthe values are"); 
	for(i=0;i<n;i++)
	 {
		printf("%d",a[i]);
	}
	
return 0;	
	
}
