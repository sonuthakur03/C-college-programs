// 03. WAP to print student details using functions and structure.


#include <stdio.h>

struct student
{
    int roll;      
    char name[50]; 
    float marks;   
};

void display(struct student s)
{
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.roll);  
    printf("Name: %s\n", s.name);     
    printf("Marks: %.2f\n", s.marks); 
}

int main()
{
    struct student s;

    printf("Enter the roll no: ");
    scanf("%d", &s.roll);

    printf("Enter the name: ");
    scanf("%s", s.name);

    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    display(s);

    return 0;
}