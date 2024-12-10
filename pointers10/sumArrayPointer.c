// 02.WAP to print sum of array using pointers

#include <stdio.h>
#include <conio.h>
int main()
{
    int sum = 0, val[5], *p;
    printf("Enter the values for array: \n");

    p = &val[0];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &val[i]);
        sum = sum + *(p + i);
    }

    printf("Value of sum is: %d", sum);
    return 0;
}