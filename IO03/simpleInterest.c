#include<stdio.h>

int main(){
    int p,t,r;
    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter Rate: ");
    scanf("%d", &r);
    printf("Enter Time: ");
    scanf("%d", &t);

    printf("Simple Intrest is: %d", (p*t*r)/100);
}