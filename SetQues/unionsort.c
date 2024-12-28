// wap to print name, id and address of employee using union and pointer of 25 people.

#include <stdio.h>
#include<string.h>

union unionsort
{
    int id;
    char name[50];
    char address[50];
};


int main() {
    
    union unionsort e[25];
    union unionsort *p;
    p = e;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter id: ");
        scanf("%d",&p[i].id);
        printf("Enter name: ");
        scanf("%s",p[i].name);
        printf("Enter address: ");
        scanf("%s",p[i].address);
    }

    union unionsort temp;
    for (int i = 0; i < 2; i++){
        for (int j = i+1; j < 3; j++)
        {
            if (strcmp(p[i].name,p[j].name))
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
       printf("%d %s %s",p[i].id,p[i].name,p[i].address);
    }
    
    

    return 0;
}