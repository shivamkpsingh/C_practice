#include <stdio.h>
int main()
{
    int a[100], size, temp, i, j;
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

    for (i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("\n The sorted array is\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }
}