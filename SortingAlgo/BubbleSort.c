#include <stdio.h>
int main()
{
    // size: size of the array
    // a[] :is the array
    // i,j:for loop counter
    // temp: temperary variable for swapping
    int size, a[100], i, j, temp;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter the array\n");
    for (i = 0; i <= size - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The unsorted array is\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }
    
    for (i = 0; i <= size - 1; i++)
    {
        for (j = 0; j <= size - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n The sorted array is..\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }
}