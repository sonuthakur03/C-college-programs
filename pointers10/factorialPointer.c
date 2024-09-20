// WAP to print factorial using pointers

#include<stdio.h>

int main(){
    int num, *ptr, fact=1, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &fact;

    for ( i = 1; i <= num; i++)
    {
        *ptr = *ptr * i;
    }

    printf("\nFactorial is %d", *ptr);  
    return 0;

}