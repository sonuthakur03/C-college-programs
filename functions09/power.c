#include <stdio.h>
#include <math.h>

double powerFun(int x, int n); 

int main() {
    int base, power;
    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    double result = powerFun(base, power); 
    printf("%d base to power %d is %.0f\n", base, power, result);

    return 0;
}

double powerFun(int x, int n) { 
    return pow(x, n); 
}
