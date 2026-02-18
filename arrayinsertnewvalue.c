#include<stdio.h>
int main () {
int i, n,value,pos;
int a[5]={2,3,4,5,7};

printf("enter the value");
scanf("%d",&n);
scanf("%d",&a[5]);
value=6;
scanf("%d",&value);
pos=4;
scanf("%d",&pos);
printf("insert the value%d:%d\n pos%d:%d",value,pos);


for( i=0;i<n-1;i--) {
	a[0]=a[i];
	printf("shifting the value");
}
	

printf("after shifting%d:%d",a[i]);	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
