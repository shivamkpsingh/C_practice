#include <stdio.h>
int main()
{
    int num, rev = 0, rem;
    printf("Enter the number to check the pallindrome\n");
    scanf("%d", &num);
    int newNum = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == newNum)
    {
        printf("%d is pallindrom", newNum);
    }
    else
    {
        printf("%d is not a pallindrom", newNum);
    }
}