#include <stdio.h>

int Partion(int a[], int lb, int ub)
{

    int pivot, start, end, temp;
    pivot = a[lb];
    start = lb;
    end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    return end;
}
void QuickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc;
        loc = Partion(a, lb, ub);
        QuickSort(a, lb, loc - 1);
        QuickSort(a, loc + 1, ub);
    }
}

int main()
{
    int a[100], size, i;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter the array\n");
    for (i = 0; i <= size - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    QuickSort(a, 0, size-1);
    printf("the sorted  array\n");
    for (i = 0; i <= size - 1; i++)
    {
        printf(" %d ", a[i]);
    }
}
