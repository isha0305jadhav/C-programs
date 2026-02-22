#include <stdio.h>

void max_min(int *a, int size, int *min, int *max);

void max_min(int *a, int size, int *min, int *max)
{
    
    *min = *max = *a;

    for (int i = 1; i < size; i++) {
        a++;              

        if (*a > *max)
            *max = *a;

        if (*a < *min)
            *min = *a;
    }
}

int main()
{
    int arr[5];
    int min, max;

    printf("\n Enter 5 elements in the arrays: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max_min(arr, 5, &min, &max);   

    printf("\n minimum = %d", min);
    printf("\n maximum = %d\n", max);

    return 0;
}

