#include<stdio.h>
int main () {
	int num,i;
	long int fact=1;
	printf("enter a num");
	scanf("%d",&num);
	if (num<0) {
		printf("the negative num is in valid");
	} else {
		i=1;
		while (i<=num) {
		
		fact*=i;
		i++;
	}
	printf("factorial %d=%d\n",fact,num);  }
	return 0;
}
