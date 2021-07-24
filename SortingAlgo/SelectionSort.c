#include <stdio.h>
int main()
{
    int a[100], size, i, j, temp, minIndex;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter the array\n");
    for (i = 0; i <= size - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The unsorted array is..\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }

    for (i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j <= size-1; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("\nthe sorted array is\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }
}