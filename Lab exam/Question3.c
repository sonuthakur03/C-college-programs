// Write a c program to compute the factorial of anumber using recursion function.

#include <stdio.h>

int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("The factoiral of %d is %d",n,factorial(n));
    return 0;
}