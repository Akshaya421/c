#include<stdio.h>
int main()
{
	int N;
printf("Enter the size of the array:");
	scanf("%d",&N);
   int A[N],i,sum=0,min=0,max=0;
	printf("Enter the elements.");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
		sum+=A[i];
		if(i==0)
		{
			min=A[i];
			max=A[i];
			continue;
		}
		if(min>A[i])
			min=A[i];
		else if(max<A[i])
			max=A[i];
	}
	printf("Min:%d,Max:%d,Avg:%f",min,max,(double)(sum)/N);
	return 0;
}

