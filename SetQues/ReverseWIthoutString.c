// Wap to find reverse string without using string handling functions

#include <stdio.h>

int main() {
    int i, j;
    char str[100], temp;

    printf("Enter the string: ");
    scanf("%s", str);  // Using %s to read the string

    for (i = 0; str[i] != '\0'; i++) {
    }

    i--;  

    for (j = 0; j < i; j++, i--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
