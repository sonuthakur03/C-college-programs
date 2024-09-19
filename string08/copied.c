#include<stdio.h>
#include<string.h>

int main(){
    char first[10], second[10];

    printf("Enter first word: ");
    gets(first);
    
    strcpy(second, first);

    printf("Copied word is: %s", second);
      
    return 0;
}