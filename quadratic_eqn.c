#include<stdio.h>
#include<math.h>
int main () {
	float a,b,c,s,d;
	printf("enter the a b c values");
	scanf("%f%f%f",&a,&b,&c);
	s=b*b-4*a*c;
	if (s>0) {
		printf("roots are real and distict");
	} else 
	 if(s=0) {
		printf("roots are equal");
	}  else
	 if (s<0) {
		printf("roots are imaginary");
	}
	d=(-b+sqrt(s))/2*a;
    printf("%.2f",d);
	return 0;
}
