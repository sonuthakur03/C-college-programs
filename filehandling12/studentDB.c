#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;

    int age; char name[50]; float marks;

    printf("Enter name: \n");
    gets(name);

    printf("Enter age: \n");
    scanf("%d",&age);
    printf("Enter marks: \n");
    scanf("%f",&marks);

    fptr = fopen("studentsDB.txt","w");

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f\t",marks);

    fprintf(fptr,"\nStudent name is %s\n",name);
    fprintf(fptr,"Student age is %d\n",age);
    fprintf(fptr,"Student marks is %f\n",marks);

    fclose(fptr);

    return 0; 
}