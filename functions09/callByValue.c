#include<stdio.h>

int swapx(int a, int b);
int main(){
    int a=10, b=20;
    swapx(a,b);
    printf("\n After swap a=%d and b=%d",a,b);
    return 0;
}
int swapx(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n inside function a=%d and b=%d",a,b);
    return 0;
}