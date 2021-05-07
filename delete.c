// delete a element from the 1-D array

#include <stdio.h>
int main()
{
    int arr[20], size, index, i, condition, key;
    printf("enter the size of array\n");
    scanf("%d", &size);
    printf("enter the array\n");
    for (i = 0; i <= size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter 1 to delete element by index number and 2 to delete element by it's value.choose one \n");
    scanf("%d", &condition);
    if (condition == 1)
    {
        printf("enter the index which you want to delete\n");
        scanf("%d", &index);
        if (index >= size)
        {
            printf("the deletion is not possible");
        }
        else
        {
            for (i = index; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            printf("the new array is.....\n");
            for (i = 0; i < size - 1; i++)
            {
                printf(" %d ", arr[i]);
            }
        }
    }
    else
    {
        printf("enter the number which you want to be delete\n");
        scanf("%d", &key);
        for (i = 0; i <= size - 1; i++)
        {
            if (arr[i] == key)
            {
                index = i;
                for (i = index; i < size - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                printf("the new array is.....\n");
                for (i = 0; i < size - 1; i++)
                {
                    printf(" %d ", arr[i]);
                }
            }
        }
    }
}
