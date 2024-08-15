// Sum of the digits given number

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%d is sum of the given number", sum);
    return 0;
}
