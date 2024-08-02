// WAP to check whether a number is negative or positive & zero using if statement

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n < 0)
        printf("%d is negative number", n);
    else if (n > 0)
        printf("%d is positive number", n);
    else
        printf("%d is zero", n);
    return 0;
}