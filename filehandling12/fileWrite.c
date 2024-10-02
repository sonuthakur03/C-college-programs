#include <stdio.h>

int main() {
    
    FILE *fptr;

    char ch;
    printf("Enter a single character: ");
    scanf("%c",&ch);

    fptr = fopen("fileWrite.txt","w");

    fprintf(fptr,"%c",ch);

    fclose(fptr);
    
    return 0; 
}