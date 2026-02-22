
#include<stdio.h>
int main()
{
	int num;
	int bit;
	printf("\n Enter a number in the range of 0 to 255: ");
	scanf("%d", &num);
	bit=sizeof(num)*8;
	printf("Binary representation of given number %hhu:",num);
	for(int i=bit-1;i>=0;i--)
	{
		printf("%d",(num>>i)&1);
		if(i%4==0)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
