#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 20, b = 10;
    printf("\nintially a is %d", a);
    a += 1;
    printf("\nafter a +=1 x is %d\n", a);
    printf("\nintially b is %d", b);
    b -= 1;
    printf("\nafter b -=1 b is %d\n", b);
    printf("\nintially a is %d", a);
    a *= 2;
    printf("\nafter a *=2 a is %d\n", a);
    printf("\nintially b is %d", b);
    b /= 5;
    printf("\nafter b /=5 b is %d\n", b);
    printf("\nintially a is %d", a);
    a %= 2;
    printf("\nafter a mod=2 v is %d \n", a);
    return 0;
}