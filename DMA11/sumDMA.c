#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, n, i, sum=0;

    printf("\nEnter size: ");
    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(int));

    printf("\nEnter elements: \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + *(p+i);
    }
    
    printf("\nSum is %d",sum);

    free(p);

    return 0;
    
}