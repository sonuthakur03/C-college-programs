// A A A A
// B B B B
// C C C C
// D D D D

#include <stdio.h>
#include <conio.h>
int main()
{
    char i, j;
    for (i = 'A'; i <= 'D'; i++)
    {
        for (j = 'A'; j <= 'D'; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}
