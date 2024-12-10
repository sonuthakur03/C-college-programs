
#include <stdio.h>
int main()
{
    int n, *ptr, i, fact = 1;
    printf("enter the number: ");
    scanf("%d", &n);
    ptr = &fact;
    for (i = 1; i <= n; i++)
    {
        *ptr = *ptr * i;
    }
    printf("\n factorial is %d", *ptr);
    return 0;
}