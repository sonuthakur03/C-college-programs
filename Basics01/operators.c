#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 5, b = 10, c = 15;

    // Arithmetic Operator
    int sum, diff, product, division, rem;
    sum = a + b;
    diff = c - b;
    product = a * c;
    division = c / a;
    rem = b % a;

    printf("Sum is %d \n", sum);
    printf("Difference is %d\n", diff);
    printf("Product is %d\n", product);
    printf("Division is %d\n", division);
    printf("Remainder is %d\n \n", rem);

    // Relational Operator
    printf("1 is True and 0 is false \n");
    printf("%d < %d is %d \n", a, b, (a < b));
    printf("%d <= %d is %d \n", a, b, (a <= b));
    printf("%d > %d is %d \n", a, b, (a > b));
    printf("%d >= %d is %d \n", a, b, (a >= b));
    printf("%d == %d is %d \n", a, b, (a == b));
    printf("%d != %d is %d \n", a, b, (a != b));

    // Logical Operator
    printf("\na>b && a>c is %d\n", (a > b && a > c));
    printf("b>a && b>c is %d\n", (b > a && b > c));
    printf("c>b && c>a is %d\n", (c > b && c > a));
    printf("a>b || a>c is %d\n", (a > b || a > c));
    printf("b>a || b>c is %d\n", (b > a || b > c));
    printf("c>b || c>a is %d\n", (c > b || c > a));

    // Assignment Operator
    int x = 5, y = 7, z = 4, w = 10, v = 13;
    printf("\nintially x is %d", x);
    x += 1;
    printf("\nafter x +=1 x is %d", x);
    printf("\nintially y is %d", y);
    y -= 1;
    printf("\nafter y -=1 y is %d", y);
    printf("\nintially z is %d", z);
    z *= 2;
    printf("\nafter z *=2 z is %d", z);
    printf("\nintially w is %d", w);
    w /= 5;
    printf("\nafter w /=5 w is %d", w);
    printf("\nintially v is %d", v);
    v %= 2;
    printf("\nafter v mod=2 v is %d \n", v);

    // Increment/Decrement Operator
    a++;
    b--;
    ++c;
    printf("\na is %d", a);
    printf("\nb is %d", b);
    printf("\nc is %d", c);
    return 0;
}