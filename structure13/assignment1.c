// Create a sturcture named student that has roll, name and 5 subject marks 
// and display the roll, name and total marks and average of a student.

#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int marks[5];
};


int main() {

    struct student s;

    int total = 0; 
    float average = 0;

    printf("Enter student Records\n");

    printf("Enter the roll\n");
    scanf("%d",&s.roll);
    printf("Enter the name\n");
    scanf("%s",s.name);
    printf("Enter the marks\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&s.marks[i]);
        total += s.marks[i];
    }

    average = total / 5;

        
    printf("Student Records\n");
    
    printf("Roll\t Name\t\t Total\t Average\n");
    printf("%d\t %s\t\t %d\t %.2f\t",s.roll, s.name, total, average);
    
    return 0;
}