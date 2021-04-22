// 1-D array

// #include <stdio.h>
// int main()
// {
//     int a[100], n, i;
//     printf("enter the size of array \n");
//     scanf("%d", &n);
//     printf("enter the array");
//     for (i = 0; i <= n - 1; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i <= n - 1; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

// 2-D array
// sum of two matrix
// condition- if((row1==row2) &&(colomn1==colomn2 ))

// #include <stdio.h>
// int main()
// {
//     int a[20][30], b[20][30], c[50][50], n, m, i, j;
//     printf("enter the size of row\n");
//     scanf("%d", &n);
//     printf("enter the size of colomn\n");
//     scanf("%d", &m);
//     printf("enter the first matrix \n");
//     for (i = 0; i <= n - 1; i++)
//     {
//         for (j = 0; j <= m - 1; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("the first matrix  is.........\n");

//     for (i = 0; i <= n - 1; i++)
//     {
//         for (j = 0; j <= m - 1; j++)
//         {
//             printf(" %d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("enter the second matrix\n");
//     for (i = 0; i <= n - 1; i++)
//     {
//         for (j = 0; j <= m - 1; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//         printf("\n");
//     }

//     printf("the second matrix is.......\n");
//     for (i = 0; i <= n - 1; i++)
//     {
//         for (j = 0; j <= m - 1; j++)
//         {
//             printf(" %d ", b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("the sum of both the matrix is ............\n");
//     for (i = 0; i <= n - 1; i++)
//     {
//         for (j = 0; j <= m - 1; j++)
//         {
//             c[i][j] = a[i][j] + b[i][j];/*addition of two array*/
//             // c[i][j] = a[i][j] - b[i][j];/*substraction of two array*/
//             printf(" %d ", c[i][j]);
//         }
//         printf("\n");
//     }
// }

// delete a number from the 1-D array

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
