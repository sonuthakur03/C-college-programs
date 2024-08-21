#include <stdio.h>
#include <conio.h>
int main()
{
    int n;

    printf("Enter how many times to print the name:\t");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Sonu Thakur x%d\n", i);
    }

    return 0;
}