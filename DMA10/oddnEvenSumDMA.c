// 02. WAP to find odd or even using DMA in c.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, n, i, s1=0, s2=0;

    printf("\nEnter size: ");
    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(int));

    printf("\nEnter elements: \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
        if (*(p+i) % 2 == 0)
        {
            s2 = s2 + *(p+i);
        }else {
            s1 = s1 + *(p+i);
        }
        
    }

    
    printf("\nOddSum is %d \nEvenSum is %d",s1,s2);

    free(p);

    return 0;
    
}