#include<stdio.h>

int oddEven(int*);

int main(){
    int num, *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;
    
    oddEven(ptr);
}

int oddEven(int *ptr){
    if (*ptr % 2 == 0)
    {
        printf("Number is even");
    }else
    {
        printf("Number is odd");
    }
    
}