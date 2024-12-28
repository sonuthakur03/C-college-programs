// wap to print if the string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100],z[100], temp;

    printf("Enter string: ");
    scanf("%s",str);

    strcpy(z,str);

    int len = strlen(str);

    for (int i = 0; i < len / 2 ; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    if (strcmp(z,str))
    {
        printf("Not Palindrome");
    }else{
        printf("Palindrome");
    }

    return 0;
}