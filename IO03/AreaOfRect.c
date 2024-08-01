#include <stdio.h>
#include <conio.h>
int main()
{
    int l, b, area;
    printf("Enter length and Breadth \n");
    scanf("%d %d", &l, &b);
    area = l * b;
    printf("Area of rectangle is %d", area);
    return 0;
}