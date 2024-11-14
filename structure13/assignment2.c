// Define a stucture of 5 employee having data members name, 
// address, age and salary & find the average salary.

#include <stdio.h>

struct employee
{
    int age;
    char name[50];
    char address[100];
    int salary;
};


int main() {

    struct employee e[5];

    int total = 0;
    float average = 0;

    printf("Enter Employee Records\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name\n");
        scanf("%s",e[i].name);    
        printf("Enter the address\n");
        scanf("%s",e[i].address);    
        printf("Enter the age\n");
        scanf("%d",&e[i].age);
        printf("Enter the salary\n");
        scanf("%d",&e[i].salary);

        total += e[i].salary;
    }
    
    average = total / 5;

    printf("Employee Records\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Name\t\t Adresss\t Age\t Salary\n");
        printf("%s\t\t %s\t\t %d\t %d\n",e[i].name, e[i].address,e[i].age, e[i].salary);
    }
    printf("The average Salary is %.2f", average);
    
    return 0;
}