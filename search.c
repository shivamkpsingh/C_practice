// search a element inside the array

#include <stdio.h>
int main()
{
    int size, counter, element, arr[size];
    printf("enter the size of the array\n");
    scanf("%d", &size);
    printf("enter the element of the array\n");
    for (counter = 0; counter <= size-1; counter++)
    {
        scanf("%d", &arr[counter]);
    }
    printf("enter the element to be search\n");
    scanf("%d", &element);
    for (counter = 0; counter <= size-1; counter++)
    {
        if (arr[counter] == element)
        {
            printf("element found at %d location", counter);
            break;
        }
    }
    if (counter >= size)
    {
        printf("the enter element is not found");
    }
}