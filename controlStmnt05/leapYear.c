#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 || year % 400 == 0) && year % 100 != 0)
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d isn't leap year", year);
    }
    return 0;
}