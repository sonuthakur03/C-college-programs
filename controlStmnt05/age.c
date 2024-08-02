// WAP to check whether person is eligible for voting or not and can drive using if statement

#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter age\n");
    scanf("%d", &age);
    if (age > 18)
        printf("Eligible for voting and can drive");
    else
        printf("Not Eligible for voting and can't drive");
    return 0;
}