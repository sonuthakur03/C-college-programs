#include <stdio.h>

struct employee
{
    int salary;
    char name[50];
    char address[100];
};


int main() {
    struct employee s[3];
    
    printf("Enter Emoployee Records\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the name\n");
        scanf("%s",s[i].name);
        printf("Enter the salary\n");
        scanf("%d",&s[i].salary);
        printf("Enter the address\n");
        scanf("%s",s[i].address);
    }

    printf("\nStudents Records");

    printf("\nName");

    for (int i = 0; i < 3; i++)
    {
        if (s[i].salary > 100000)
        {
            printf("\n%s", s[i].name);
        }
        
    }
    
    return 0;
}