#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, fact = 1;

    printf("Enter number for factorial: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Factorial is 1");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("Factorial is: %d", fact);
    }

    return 0;
}