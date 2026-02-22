#include<stdio.h>

void f()
{
	printf("Hello\n");
	f();
}

void main(void)
{
	f();
}
