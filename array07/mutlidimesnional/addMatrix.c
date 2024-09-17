#include<stdio.h>

int main(){
    int a[2][2],b[2][2],i,j, sum[2][2];

    printf("Enter matrix elements for a and b turnwise: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d %d",&a[i][j],&b[i][j]);
            sum[i][j] = a[i][j] + b[i][j];
        }
        
    }



    printf("Sum of matrices are: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    
}