// 01. WAP to print student name, roll, marks, remarks using structure. 

#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float marks;
    char remarks;
};

int main() {
    struct student s;

    printf("Enter Name: \n");
    scanf("%s", s.name);
    printf("Enter Roll: \n");
    scanf("%d", &s.roll);
    printf("Enter Marks: \n");
    scanf("%f", &s.marks);
    getchar();
    printf("Enter Remarks P for pass and F for fail: \n");
    scanf("%c", &s.remarks);

    printf("Name\tRoll\tMarks\tRemarks\n");
    printf("%s\t%d\t%.2f\t%c",s.name,s.roll, s.marks, s.remarks);
    return 0;
}