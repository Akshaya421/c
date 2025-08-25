#include<stdio.h>
#include<math.h>
 int main()
 {
 	int m,n;
	int i,j,a[m][n],b[m][n],c[m][n],d[m][n];
	printf("enter the m n values");
		scanf("%d%d",&m,&n);
	printf("enter the first matrix");
	for(i=0;i<m; i++) {
		for(j=0;j<n; j++) {
			scanf("%d",&a[i][j]); }
		printf("\n"); }
	printf("enter the second matrix");
	for(i=0;i<m; i++) {
		for(j=0;j<n; j++) {
			scanf("%d",&b[i][j]); }
		printf("\n"); }
	printf("addition of  matrix");
	for(i=0;i<m; i++) {
	for(j=0;j<n; j++) {
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]); }
		printf("\n"); } 
	printf("subtraction of  matrix");
	for(i=0;i<m; i++) {
	for(j=0;j<n; j++) {
			d[i][j]=a[i][j]-b[i][j];
			printf("%d\t",d[i][j]); }
		printf("\n"); } 
	return 0; 
}	
