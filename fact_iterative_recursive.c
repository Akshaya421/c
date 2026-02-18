#include<stdio.h> // using iteration
int fact_ite(int n){
	int f=1,i;
	if(n==0 || n==1) {
		return 1;
	} else {
		for (i=1;i<=n; i++) {
			f=f*i; }
			return f ; 
	} 
}
int fact_rec(int s) { // using recursion
if(s==0 || s==1) {
	return 1;}
	else {
		return s*fact_rec(s-1);
	}
}	
int main () {
	int n;
	printf("enter the n value:");
scanf("%d",&n);
	printf("factorial of a num using iterative method :%d\n",fact_ite(n)); 
	int s;
	printf("enter the s value:");
	scanf("%d",&s);
	printf("factorial of a num using recursive method:%d",fact_rec(s));
	return 0; }
