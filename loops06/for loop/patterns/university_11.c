// U
// U N
// U N I
// U N I V
// U N I V E
// U N I V E R
// U N I V E R S
// U N I V E R S I
// U N I V E R S I T
// U N I V E R S I T Y

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[] = "UNIVERSITY";
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