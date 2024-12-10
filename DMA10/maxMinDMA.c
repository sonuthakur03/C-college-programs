// 03. WAP to find minimum and maximum from a array using DMA in C.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, n, i, max=32768, min=32767;

    printf("\nEnter size: ");
    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(int));

    printf("\nEnter elements: \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
        if (*(p+i) > max)
        {
            max = *(p+i);
        }
        if (*(p+i) < min)
        {
            min = *(p+i);
        }
        
        
    }

    
    printf("\nMaximun is %d \nMinimun is %d",max,min);

    free(p);

    return 0;
    
}