#include <stdio.h>
#include <conio.h>
int main()
{
    int n, term1 = 0, term2 = 1, nextTerm = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", term1, term2);

    for (int i = 3; i <= n; ++i)
    {
        nextTerm = term1 + term2;
        printf("%d ", nextTerm);
        term1 = term2;
        term2 = nextTerm;
    }

    return 0;
}
