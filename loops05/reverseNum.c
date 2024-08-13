// Reverse of the given number

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("%d is reverse of the given number", rev);
    return 0;
}