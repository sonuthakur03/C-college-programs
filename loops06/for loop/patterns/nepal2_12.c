// N
// E E
// P P P
// A A A A
// L L L L L

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[] = "NEPAL";
    int i, j, len;
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", str[i]);
        }
        printf("\n");
    }

    return 0;
}