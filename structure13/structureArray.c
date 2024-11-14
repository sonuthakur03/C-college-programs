#include <stdio.h>

struct structureArray
{
    int roll;
    char name[50];
    float marks;
};


int main() {
    struct structureArray s[3];
    
    printf("Enter Students Records\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the roll\n");
        scanf("%d",&s[i].roll);
        printf("Enter the name\n");
        scanf("%s",s[i].name);
        printf("Enter the marks\n");
        scanf("%f",&s[i].marks);
    }

    printf("\nStudents Records");

    printf("\nRoll\tName\tMarks");

    for (int i = 0; i < 3; i++)
    {
        printf("\n%d\t%s\t%.2f",s[i].roll, s[i].name, s[i].marks);
    }
    
    return 0;
}