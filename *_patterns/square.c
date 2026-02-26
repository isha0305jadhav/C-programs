#include<stdio.h>
int main()
{
	int i,j;
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
