#include<stdio.h>
void fibonacci(int n)
{
	int series[n];
	for (int i=0; i<n;i++)
	{
		if(i==0)
			series[i]=0;
		else if(i==1)
			series[i]=1;
		else
		        series[i]=series[i-1]+series[i-2];
	}
	printf("\n required fibonacci sereis:");
	for(int i=0;i<n;i++)
	{
	   printf(" %d ",series[i]);
	}
}
void main()
{
	int n;
	printf("\n Enter required  numbers in fibonacci series: ");
	scanf("%d",&n);
	fibonacci(n);
}
