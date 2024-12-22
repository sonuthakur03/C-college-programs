// 02. WAP to print data of student using conditionals and structure array who have scored more than 250 marks.

#include <stdio.h>

struct structureArray
{
    int roll;
    int marks;
    char name[50];
    char address[100];
};


int main() {
    struct structureArray s[3];
    
    printf("Enter Students Records\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the roll: ");
        scanf("%d",&s[i].roll);
        printf("Enter the name: ");
        scanf("%s",s[i].name);
        printf("Enter the address: ");
        scanf("%s",s[i].address);
        printf("Enter the marks: ");
        scanf("%d",&s[i].marks);
    }

    printf("\nStudents Records");

    printf("\nRoll\tName\tAddress\tMarks");

    for (int i = 0; i < 3; i++)
    {
        if (s[i].marks > 250)
        {
            printf("\n%d\t%s\t%s\t%d", s[i].roll, s[i].name, s[i].address, s[i].marks);
        }
        
    }
    
    return 0;
}