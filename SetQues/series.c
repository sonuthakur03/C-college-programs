// WAP to print the series 1/2 ,2/3 ,3/4 .... n-1/n.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of series to print: ");
    scanf("%d",&n);

    for (int i = 2; i <=n; i++)
    {
        printf("%d",(i-1)/i);
    }
    
    return 0;
}