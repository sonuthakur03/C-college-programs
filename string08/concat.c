// 02. WAP to concat two strings using strings

#include<stdio.h>
#include<string.h>

int main(){
    char first[10], second[10];

    printf("Enter first word: ");
    gets(first);
    printf("Enter second word: ");
    gets(second);

    strcat(first,second);

    printf("Combined word is: %s", first);

    return 0;
}