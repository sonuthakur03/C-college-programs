// pointer to structure to show employee details

#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    char address[50];
};


int main() {

    struct employee e;
    struct employee *p;

    p = &e;

    printf("Enter Id: ");
    scanf("%d", &p->id);
    printf("Enter Name: ");
    scanf("%s", p->name);
    printf("Enter Address: ");
    scanf("%s", p->address);

    printf("%d\t%s\t%s", (*p).id, (*p).name, (*p).address);
    
    return 0;
}