#include<stdio.h>
int main () {
	char operator;
	int a,b;
printf("enter operands like +,-,*,/,%");
scanf("%c",&operator);
printf("enter the a ,b values");
scanf("%d %d",&a,&b);
switch (operator) {
	case '+':
		printf("%d + %d = %d\n",a,b,a+b);
	break;
	case '-' : 
	printf("%d - %d = %d\n",a,b,a-b);
	break;
	case '*' :
	printf("%d * %d = %d\n",a,b,a*b);
	break;
	case '/' : 
	printf("%d / %d = %d\n",a,b,a/b);
	break;
	default:
		printf("invalid operator");
}

return 0 ;

}
