#include <stdio.h>

int main()
{
    FILE *fptr;
    float marks[5];
    char name[5][100];
        printf("Enter 5 Students name and marks\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Student name: ");
        scanf("%s", name[i]);
        printf("Enter Student Marks: ");
        scanf("%f", &marks[i]);
    }

    fptr = fopen("studentData.txt", "w");

    for (int i = 0; i < 5; i++)
    {
        fprintf(fptr, "%d %s %f\n", i+1, name[i],marks[i]);
        printf("Id: %d \t Name: %s \t Marks: %f\n", i+1, name[i],marks[i]);
    }

    fclose(fptr);
    return 0;
}