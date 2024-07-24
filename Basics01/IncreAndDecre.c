#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 5, b;

    b = a++;
    printf("b is %d and a is %d when a++\n", b, a);
    b = ++a;
    printf("b is %d and a is %d when ++a\n", b, a);
    b = a--;
    printf("b is %d and a is %d when a--\n", b, a);
    b = --a;
    printf("b is %d and a is %d when --a\n", b, a);

    return 0;
}