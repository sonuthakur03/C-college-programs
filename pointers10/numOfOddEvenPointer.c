#include <stdio.h>
#include <conio.h>
int main()
{
    int noOdd = 0, noEven = 0, val[5], *p;
    printf("Enter the values for array: \n");

    p = val;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &val[i]);
        if (*(p+i) % 2 == 0)
            noEven = noEven + 1;
        else
            noOdd = noOdd + 1;
    }

    printf("Number of Even is: %d\n", noEven);
    printf("Number of Odd is: %d", noOdd);
    return 0;
}