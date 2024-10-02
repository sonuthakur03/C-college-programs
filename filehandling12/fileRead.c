#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("test.txt","r");

    int num;

    fscanf(fptr,"%d",&num);

    printf("Number is %d", num);

    return 0; 
}