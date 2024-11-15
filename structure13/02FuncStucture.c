// Function with structure array

#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int display(struct employee []);

int main() {

    struct employee e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the id\n");
        scanf("%d",&e[i].id);
        printf("Enter the name\n");
        scanf("%s",e[i].name);       
        printf("Enter the salary\n");
        scanf("%f",&e[i].salary);
    }

    display(e);
        
    return 0;
}

int display(struct employee e[]){
    for (int i = 0; i < 3; i++)
    {
        if (e[i].salary > 100000)
        {
            printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
        }
        
    }
    
}