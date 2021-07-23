#include <stdio.h>
int main()
{
    int number, counter;
    printf("Enetr the number to be check\n");
    scanf("%d", &number);
    for (counter = 2; counter <= number / 2; counter++)
    {
        if (number % counter == 0)
        {
            printf("%d is not a prime number\n", number);
            break;
        }
    }
    if (counter > number / 2)
    {

        printf("%d is a prime number\n", number);
    }
}

// function for checking prime number

#include<stdio.h>
 
int check_prime(int);
 
 int main()
{
   int n, result;
 
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);
 
   result = check_prime(n);
 
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);

}
 
int check_prime(int a)
{
   int c;
 
   for ( c = 2 ; c <= a /2 ; c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
 