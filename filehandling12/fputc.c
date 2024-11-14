#include <stdio.h>

int main() {
    FILE *fptr;

    char str[] = "MANGO";

    fptr = fopen("fputc.txt","w");
    for (int i = 0; i < 5; i++)
    {
        fputc(str[i],fptr);
        printf("%c\n",str[i]);
    }
    
    return 0; 
}