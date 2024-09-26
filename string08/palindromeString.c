#include <stdio.h>
#include <string.h>

int main()
{
    int len, i;
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    rev[len] = '\0';

    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    if (strcmp(rev, str) == 0)
    {
        printf("%s is palindrome", str);
    }
    else
    {
        printf("%s is not palindrome", str);
    }

    return 0;
}
