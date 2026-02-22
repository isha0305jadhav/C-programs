
#include<stdio.h>
int main()
{
	int n;
	int result=0;
	printf("\n Enter number to multiply: ");
	scanf("%d",&n);
	result= ((n<<3)+n);
	printf("\n After multiplication of given number with 9 result: %d ",result);
	int result2=0;
	result2=((n<<3)-n);
	printf("\n After multiplication of given number with 7 result: %d ",result2);
	int result3=0;
	result3=((n<<2)-n);
        printf("\n After multiplication of given number with 3 result: %d ",result3);
	return 0;
}
