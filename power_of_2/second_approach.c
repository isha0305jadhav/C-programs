#include<stdio.h>
int main()
{
	int n;
	int count=0;
	printf("\n Enter a number to check:");
	scanf("%d", &n);
	while(n!=0)
	{
		count= count+(n&1);
		n=n>>1;
	}
	if(count==1)
	{
		printf("\n Given number is power of 2");
	}
	else
	{
		printf("\n Given number is not power of 2");
	}
	return 0;
}
