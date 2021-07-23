// c program to find the sum of the element  of the array





#include <stdio.h>
int main()
{
    int size, counter, arr[100], sum = 0;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    printf("enter the element of the array\n");
    for (counter = 0; counter <= size; counter++)
    {
        scanf("%d", &arr[counter]);
    }
    for (counter = 0; counter <= size; counter++)
    {
        sum = sum + arr[counter];
    }
    printf("the sum of the element is %d ", sum);
}