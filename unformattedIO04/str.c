#include<stdio.h>

int main(){
    char name[20];
    
    printf("Enter full name: ");
    gets(name);
    printf("Full name is: ");
    puts(name);
    return 0;
}