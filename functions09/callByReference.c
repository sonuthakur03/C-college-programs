#include<stdio.h>

void swapx(int*, int*);
int main(){
    int a=10, b=20;
    printf("\n Before swap a=%d and b=%d",a,b);
    swapx(&a,&b);
    printf("\n After swap a=%d and b=%d",a,b);
    return 0;
}
void swapx(int*a, int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\n inside function a=%d and b=%d",*a,*b);
}