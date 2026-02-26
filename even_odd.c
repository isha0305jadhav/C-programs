
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number to check: ");
	scanf("%d", &n);
        if((n&1)==0)
	{
	  printf("\n Given number is even \n");
	}
	else
	{
	  printf("Given number is odd \n ");
	}
return 0;
}
