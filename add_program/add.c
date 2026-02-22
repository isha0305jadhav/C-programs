#include<stdio.h>
int add(int* a, int* b)
{
	*a=*a+1;
	*b=*b+2;
	return *a+*b;
}
void main()
{
	int a,b;
	int sum=0;
	printf("Enter two numbers to add");
	scanf("%d %d",&a, &b);
	printf("\n addr a: %p value of a:%d addr b:%p value of b:%d",&a,a,&b,b);
	sum=add(&a,&b);
	printf("\n addr a: %p value of a:%d addr b: %p b:%d\n",&a, a, &b, b);
	printf("\n Addition of  numbers is: %d",sum);
}

