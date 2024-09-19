#include<stdio.h>
#include<string.h>

int main(){
    char first[10], second[10];

    printf("Enter first word: ");
    gets(first);
    printf("Enter second word: ");
    gets(second);
    
    if (strcmp(first,second) == 0)
    {
        printf("Names are equal");
    } else
    {
        printf("Names are not equal");
    }
    
    return 0;
}