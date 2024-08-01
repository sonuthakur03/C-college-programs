#include <stdio.h>
#include <conio.h>
int main()
{
    char name[20];
    printf("Enter full name: ");
    gets(name);
    printf("Full Name is: ");
    puts(name);
    // printf("Full name is %s", name);
    return 0;
}