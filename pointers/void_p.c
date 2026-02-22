#include<stdio.h>
int main()
{
	int a=5;
	double b=3.232;
	void *p;//void pointer
	p=&a;
	printf("\n valuof a=%d",*((int*)p));
	p= &b;
	printf("\n value of b:%f",*((double*)p));
}
