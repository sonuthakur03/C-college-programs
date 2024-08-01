#include <stdio.h>
#include <conio.h>
int main()
{
    char ch1, ch2;
    printf("Enter First Character: ");
    ch1 = getch();

    printf("\nEnter Second Character: ");
    ch2 = getche();

    printf("\n First Character is ");
    putch(ch1);

    printf("\n Second Character is ");
    putch(ch2);
    return 0;
}