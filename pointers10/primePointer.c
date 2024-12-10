// 03. WAP to print prime or not using pointers.

#include <stdio.h>

void checkPrime(int*, int*);

int main() {
    int number, primeFlag;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkPrime(&number, &primeFlag);

    if (primeFlag) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

void checkPrime(int *num, int *isPrime) {
    if (*num <= 1) {
        *isPrime = 0;
        return;
    }

    for (int i = 2; i <= *num/2; i++) {
        if (*num % i == 0) {
            *isPrime = 0; 
            return;
        }
    }
    *isPrime = 1; 
}