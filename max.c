
// c program to find largest element in the array

#include <stdio.h>
int main()
{
    int n, i, a[100], max;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter the elemrent of the array\n");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0]; //initialise the first element is the largest element

    for (i = 0; i <= n; i++)
    {
        if (max < a[i + 1])
        {
            max = a[i + 1];
        }
    }
    if (i > n)
    {
        printf("the largest elemrent is %d", max);
    }
}