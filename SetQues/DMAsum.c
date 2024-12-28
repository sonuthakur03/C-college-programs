// WAP to find sum of n numbers using DMA.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, i, sum=0,n;
    printf("Enter the size: ");
    scanf("%d",&n);

    p = (int*)malloc(n*sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
    }
    
    printf("Enter elments\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
        sum += *(p+i);
    }

    printf("The sum is %d",sum);

    free(p);
    
    return 0;
}