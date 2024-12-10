// 01. WAP to print sum of 2 numbers using pointers

#include<stdio.h>

int main(){
    int a,b,sum;
    int *p1,*p2;

    printf("Enter Two numbers: ");
    scanf("%d %d", &a,&b);

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    printf("Sum is %d",sum);
}