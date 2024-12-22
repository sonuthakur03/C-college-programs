// Write a c program to read a number from keyboard and check whether it is a palindrome or not.

#include<stdio.h>

int main(){
    int z,n,sum=0, rem;

    printf("Enter a number\n");
    scanf("%d",&n);

    z=n;
    while (n)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n / 10;
    }
    if (z == sum)
    {
        printf("Number is armstrong");
    }else
    {
        printf("Number is not armstrong");
    }
    
    return 0;
}