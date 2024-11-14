#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("fputc.txt","r");
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n",fgetc(fptr));
    }
    
    return 0; 
}