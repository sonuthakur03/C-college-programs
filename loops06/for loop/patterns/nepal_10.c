// N
// N E
// N E P
// N E P A
// N E P A L

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
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}
