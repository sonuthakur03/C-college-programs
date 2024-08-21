#include <stdio.h>
#include <conio.h>
int main()
{
    int sum = 0, val[5];
    printf("Enter the values for array: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &val[i]);
        sum = sum + val[i];
    }

    printf("Value of sum is: %d", sum);
    return 0;
}