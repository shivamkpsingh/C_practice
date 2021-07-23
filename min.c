// c program to find minimum element from tjhre array

#include <stdio.h>
int main()
{
    int size, counter, arr[100], min;

    printf("enter the size of the array\n");
    scanf("%d", &size);
    printf("enter the element of the array\n");
    for (counter = 0; counter <= size; counter++)
    {
        scanf("%d", &arr[counter]);
    }
    min = arr[0];
    for (counter = 0; counter <= size; counter++)
    {
        if (min > arr[counter + 1])
        {
            min = arr[counter + 1];
        }
    }
    if (counter > size)
    {
        printf("the minimum element of the array is %d ", min);
    }
}