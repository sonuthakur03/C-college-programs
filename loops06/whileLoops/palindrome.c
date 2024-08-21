// Palindrome number or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rev = 0, rem, z;
    printf("Enter a number: ");
    scanf("%d", &n);
    z = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (z == rev)
    {
        printf("%d is palindrome number", z);
    }
    else
    {
        printf("%d is not palindrome number", z);
    }
    return 0;
}