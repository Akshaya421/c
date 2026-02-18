#include<stdio.h>
int main()
{
	int arr[10], n, *p , i;    
	p= arr;
printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter %d elements into array using pointer:",n);
	for(i=0 ; i< n; i++)
	scanf("%d", (p+i));
	
printf("printing elements using array :");
	for(i=0 ; i< n; i++)
	printf("%d", arr[i]);
          return 0;
}


