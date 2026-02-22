#include<stdio.h>
//with using temp variable
void swap(int a, int b)
{
	int temp;
	temp=b;
	b=a;
	a=temp;
	printf("\n after swapping: a=%d b=%d", a, b);
	
}
//without using temp variable
void alter(int *x,int*y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("\n after swapping addr x:%p value of x:%d addr of y:%p value of y:%d\n",x,*x,y,*y);
}
//using bit- wise operator
void chng(int i, int j)
{
	i=i^j;
	j=i^j;
	i=i^j;
	printf("\n after swapping i:%d j:%d",i,j);
}
int main()
{
	int a,b,x,y, i,j;
	printf("Enter two numbers to swap:");
	scanf("%d %d", &a,&b);
	printf("\n before swapping: a=%d b=%d \n",a,b);
	swap(a,b);
	//to test alter function:
	printf("\n Enter two numbers to swap:");
	scanf("%d %d",&x,&y);
	printf("\n befor swapping: addr x:%p x:%d addr y:%p y:%d",&x,x,&y,y);
	alter(&x,&y);
	//to test chng function:
	printf("\n enter two numbers:");
	scanf("%d %d",&i,&j);
	chng(i,j);
}
