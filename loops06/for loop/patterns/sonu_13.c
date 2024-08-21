// S
// S O
// S O N
// S O N U
// S O N U T
// S O N U T H
// S O N U T H A
// S O N U T H A K
// S O N U T H A K U
// S O N U T H A K U R

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[] = "SONUTHAKUR";
    int i, j, len;

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}