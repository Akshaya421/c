#include<stdio.h> 
int greatest();
 int swapusing();
 int swapnotusing();
int main() {
	printf("The greatest num among three is:\n");
	greatest();
	printf("swapping two var with using third var:\n");
	swapusing();
		printf("swapping two var with out using third var:\n");
		swapnotusing();
		return 0;
}
greatest() {
	int a,b,c;
	printf("\nenter the a,b,c values:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c) {
		printf("Greatest num is:%d",a); }
		else if (b>c && b>a) {
			printf("Greatest num is :%d ",b);
		} else {
			printf("Greatest num is:%d",c);
		}
		printf("\n");
}
swapusing() {
	int a,b,c;
	printf("enter the a,b values");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping:%d%d",a,b);
	printf("\n");
}
swapnotusing() {
	int a,b;
	printf("enter the a,b values");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping:%d%d",a,b);
}
