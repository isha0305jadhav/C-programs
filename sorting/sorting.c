#include <stdio.h>
int main()
{
	int array[5];
	int i,j,temp;
	printf("Enter 5 elements in the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d", &array[i]);
	}
	printf("\n Given array is:");
	for(i=0;i<5;i++)
	{
		printf(" %d ", array[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}

	printf("\n After Sorting the array in ascending order:");

	for(i=0;i<5;i++)
	{
		printf(" %d ", array[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}

	printf("\n After Sorting the array in descending order:");
	for(i=0;i<5;i++)
	{
		printf(" %d ", array[i]);
	}

return 0;
}
