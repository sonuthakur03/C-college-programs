// WAP to print sum using functions and pointers

#include<stdio.h>

int sum(int*, int*);

int main(){
    int a, b, *p1,*p2;

    printf("Enter numbers: \n");
    scanf("%d %d",&a,&b);
    p1 = &a;
    p2 = &b;
    
    sum(p1, p2);
    return 0;
}

int sum(int *p1, int *p2){
    int sum = 0;
    sum = *p1 + *p2;

    printf("Sum is %d", sum);
    return 0;
}