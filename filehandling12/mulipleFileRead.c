#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("multipleFileRead.txt","r");

    int a,b,c;

    fscanf(fptr,"%d %d %d",&a,&b,&c);

    printf("Values are %d %d %d",a,b,c);

    return 0; 
}