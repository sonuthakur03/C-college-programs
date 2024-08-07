// WAP to find all possible roots of quardatic equation.

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float d, r1, r2;

    printf("Enter a b c :");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d >= 0)
    {
        if (d == 0)
        {
            r1 = -b / (2 * a);
            r2 = -b / (2 * a);
            printf("\n Roots are real and same");
            printf("\n r1 = %f \t r2 = %f", r1, r2);
        }
        else
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("\n Roots are real and different");
            printf("\n r1 = %f \t r2 = %f", r1, r2);
        }
    }
    else
    {
        printf("Roots are imaginary and unequal");
    }

    return 0;
}