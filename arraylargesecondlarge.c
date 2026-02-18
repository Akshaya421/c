#include<stdio.h>
int main () 
{
int  a[5]={101,11,3,4,50};
int i,large,second;
  if (a[0]>a[1])
    {
	 large=a[0];
	 second=a[1];
	}
	else
	{
		large=a[1];
		second=a[0];
	}
	for (i=2;i<5;i++)	
	{
		if(large<a[i]) 
		{
		second=large;
		large=a[i]; 
	    }
		else if(second<a[i]) 
		{
		second=a[i];	
		}
	}
	printf("large:%d\n second:%d\n",large,second);
	return 0;
}
