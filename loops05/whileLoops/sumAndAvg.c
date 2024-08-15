// WAP to find the sum and average of the mark of 5 subjects using while loop

#include <stdio.h>
#include <conio.h>
int main()
{
    int marks, n = 1, avg = 0, sum = 0;

    while (n <= 5)
    {
        printf("enter marks for the %d subject: ", n);
        scanf("%d", &marks);
        sum = sum + marks;
        n++;
    }
    avg = sum / 5;
    printf("%d is sum\n", sum);
    printf("%d is average", avg);

    return 0;
}