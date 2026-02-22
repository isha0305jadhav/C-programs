#include<stdio.h>
void is_pallindrome(int num)
{
	int result=0;
	int temp;
	int org=num;
	while(num!=0)
	{
        	temp=num%10;
		result= result*10+temp;
        	num=num/10;
	}
	if(result==org)
	{
		printf("\n Given number is pallindrome");
	}
	else
	{
		printf("\n Given number is not a pallindrome");
	}
}
void main()
{
	int num;
	printf("\n Enter a number to check:");
	scanf("%d",&num);
	is_pallindrome(num);

}
