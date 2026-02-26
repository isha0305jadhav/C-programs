#include<stdio.h>
int main()
{
	int n;
	int result=0;
	printf("\n enter a number to check(should be greater than 0):");
	scanf("%d", &n);
	if((n>0) && ((n&(n-1))==0))
	{
		printf("\n given number %d  is power of 2\n",n);
	}
	else
	{
		printf("\n Given number %d  is not power of 2\n",n);
	}
	return 0;
}
