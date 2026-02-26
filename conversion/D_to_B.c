#include <stdio.h>
int main()
{
	int num;
	int i=0;
	int result[32]={0};
	printf("Enter a number in decimal:");
	scanf("%d", &num);
	while(num>0)
	{
		result[i]=num%2;
		num=num/2;
		i++;
	}
	printf("after conversion to binary: ");
	for(int j=31;j>=0;j--)
	{
		printf("%d", result[j]);
		if(j%4==0)
		{
			printf(" ");
		}
	}
	return 0;
}

