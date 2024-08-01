#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, n3, avg;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    avg = (n1 + n2 + n3) / 3;
    printf("Average is %d", avg);
    return 0;
}