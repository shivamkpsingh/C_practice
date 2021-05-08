// search a element in the array using binary search method

#include <stdio.h>
int main()
{
    int arr[100], size, counter, left, right, element, mid;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    printf("according to the binary search, enter the element in the sorted order\n");
    for (counter = 0; counter <= size; counter++)
    {
        scanf("%d", &arr[counter]);
    }
    printf("enter the element to be search\n");
    scanf("%d", &element);
    left = 0;
    right = size - 1;

    // printf(" mid is %d",mid);
    while (left < right)
    {
        mid = (left + right) / 2;
        printf("mid is %d", mid);
        if (arr[mid] > element)
        {
            right = mid - 1;
            mid = (left + right) / 2;
        }
        else if (arr[mid] == element)
        {
            printf("element is found at %d location", mid);
            break;
        }
        else
        {
            left = mid + 1;
            mid = (left + right) / 2;
        }
    }

    if (left > right)
    {
        printf("OOP's the element is not found, sorry");
    }
}