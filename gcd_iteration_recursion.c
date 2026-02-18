 #include<stdio.h> 
int gcd_recursion(int n1, int n2) {
	if(n2==0) {
	return n1; }
	else {
		return (n1,n1 % n2);
	}
} 
int gcd_iteration(int a1, int a2) {
int i,gcd=1;
for(i=1; i <= a1 && i <= a2; i++) {
	if (a1 % i == 0 && a2 % i == 0) {
		gcd=i;
	}
}	
return gcd;	
} 
int main() {
	int n1,n2; 
	printf("enter the  values  :%d%d",n1,n2);
	scanf("%d%d",&n1,&n2);
	printf("gcd of two num using recursion:%d ",gcd_recursion(n1, n2) );
	int a1,a2;
	printf("enter the  values  :%d%d",a1,a2);
	scanf("%d%d",&a1,&a2);
	printf("gcd of two num using iterative :%d ",gcd_iteration(a1,a2 ));
	return 0;
}
