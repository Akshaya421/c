#include<stdio.h>
int main () {
int n,i,a[i];
int large,small;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the elements in to an array");
large=small=a[0];
for(i=0;i<n;i++)
  {
	scanf("%d",&a[i]);

  }
	printf("\n largest: small");
	for (i=0;i<n;i++)	
	{
	  if (a[i]>large) 
	    {
	    large=a[i];
	
	    }
	  if (a[i]<small) 
	   {
	   small=a[i];
	   }
	   printf("%d%d",large,small);		
    }
return 0;
}
