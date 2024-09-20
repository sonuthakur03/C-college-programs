// WAP to print array using pointers. 

#include<stdio.h>

int main(){
    int a[10], i, *p;

    printf("Enter numbers: \n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    
    p=&a[0];

    for ( i = 0; i < 10; i++)
    {
        printf("\n%d", *(p+i));
    }
    return 0;
}