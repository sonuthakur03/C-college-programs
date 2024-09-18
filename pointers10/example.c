#include<stdio.h>

int main(){
    int a=10;
    int *ptr;

    ptr = &a;

    printf("Address is %d\n", ptr);
    printf("Value is %d\n", *ptr);

    return 0;
}