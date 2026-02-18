#include<stdio.h>
int main () {
	int i, n,sum=0,min=0,max=0;
	printf("enter the size of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
		sum=sum+a[i];
	if(i==0) {
		min=a[i];
		max=a[i];
		continue; }
	if (min>a[i]) {
		min=a[i];
	} else if (max<a[i]) {
		max=a[i]; } }
	printf("min=%d max=%d avg=%f",min,max,(float)sum/n);
	return 0;
}
