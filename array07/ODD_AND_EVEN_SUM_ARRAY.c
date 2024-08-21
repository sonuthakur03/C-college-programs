#include <stdio.h>
#include <conio.h>
int main()
{
    int sumOdd = 0, sumEven = 0, val[5];
    printf("Enter the values for array: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &val[i]);
        if (val[i] % 2 == 0)
            sumEven = sumEven + val[i];
        else
            sumOdd = sumOdd + val[i];
    }

    printf("Value of Even sum is: %d\n", sumEven);
    printf("Value of Odd sum is: %d", sumOdd);
    return 0;
}