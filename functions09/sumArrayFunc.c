// 01. WAP to find sum of array using function.

#include<stdio.h>

int sum(int a[]);
int main(){
    int a[5],i,s;

    printf("enter elements: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    s = sum(a);

    printf("\nSum = %d", s);
    return 0;
}

int sum(int a[]){
    int s=0, i;
    for ( i = 0; i < 5; i++)
    {
        s = s+a[i];
    }
    return s;
}