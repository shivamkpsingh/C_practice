

// 2-D array
// sum of two matrix
// condition- if((row1==row2) &&(colomn1==colomn2 ))

#include <stdio.h>
int main()
{
    int a[20][30], b[20][30], c[50][50], n, m, i, j;
    printf("enter the size of row\n");
    scanf("%d", &n);
    printf("enter the size of colomn\n");
    scanf("%d", &m);
    printf("enter the first matrix \n");
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("the first matrix  is.........\n");

    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    printf("enter the second matrix\n");
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("the second matrix is.......\n");
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
    printf("the sum of both the matrix is ............\n");
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];/*addition of two array*/
            // c[i][j] = a[i][j] - b[i][j];/*substraction of two array*/
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }
}

