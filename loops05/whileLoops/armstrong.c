// Armstrong number or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0, rem, z;
    printf("Enter a number: ");
    scanf("%d", &n);
    z = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if (z == sum)
    {
        printf("%d is a Armstrong number", z);
    }
    else
    {
        printf("%d is not a Armstrong number", z);
    }
    return 0;
}