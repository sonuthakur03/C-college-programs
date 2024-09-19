#include<stdio.h>
#include<string.h>
int main(){
    char name[20];

    printf("Enter name: ");
    gets(name);

    int length = strlen(name);

    printf("Length is %d", length);

    return 0;
}