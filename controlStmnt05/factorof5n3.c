// Write a C program to take positive integer input and tell
// if it is divisible by 5 or 3 but not divisible by 15 by
//  using nested if statement.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("%d is divisible by 5 or 3 and not divisible 15", n);
        }
        else
        {
            printf("%d is divisible by 5 or 3 and divisible 15", n);
        }
    }
    else
    {
        printf("%d is not divisible by 5 or 3 and 15 also", n);
    }
    return 0;
}