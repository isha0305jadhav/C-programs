#include <stdio.h>
int find_max(int *arr, int size)
{
	int max=*arr;
	for(int i=0;i<size;i++)
	{
		if(*(arr+i)>max)
		{
			max=*(arr+i);
		}
	}
	return max;
}
int main()
{
	int array[]={10,25,7,89,43,12};
	int size=sizeof(array)/sizeof(array[0]);
	int result= find_max(array,size);
	printf("maximum element in the given array: %d",result);
	return 0;
}
