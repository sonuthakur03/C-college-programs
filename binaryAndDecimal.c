#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    long n;
    int choice, rem = 0, a[30], i = 0, j, dec = 0, place = 0;

    printf("Choose the operation accordingly\n");
    printf("1.Decimal to Binary\n2.Binary to Decimal\nchoose the number 1 or 2 for operation: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the decimal number\n");
        scanf("%ld", &n);

        while (n)
        {
            rem = n % 2;
            n = n / 2;
            a[i] = rem;
            i++;
        }

        printf("Binary number is: ");
        for (j = i - 1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }
        break;

    case 2:
        printf("Enter the binary number\n");
        scanf("%ld", &n);

        while (n)
        {
            rem = n % 10;
            if (rem)
            {
                dec = dec + (pow(2, place));
            }
            n = n / 10;
            place++;
        }

        printf("Decimal number is: ");
        printf("%d", dec);
        break;

    default:
        printf("Invalid choice");
        break;
    }

    return 0;
}