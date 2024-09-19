#include<stdio.h>

int main(){
    int num, *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    if (*ptr % 2 == 0)
    {
        printf("Number is even");
    }else
    {
        printf("Number is odd");
    }
    
    
}