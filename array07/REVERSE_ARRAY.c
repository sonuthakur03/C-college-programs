#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5], i;

    printf("Enter the values for array: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Values of array in reverse are: \n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}