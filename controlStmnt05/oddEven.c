// WAP to check whether number is even or odd

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");
    return 0;
}