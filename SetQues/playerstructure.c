// Wap to print players info name, age, height and position using pointer.

#include <stdio.h>

struct playerstructure
{
    char name[50];
    int age;
    char position[50];
    float height;
};


int main() {
    
    struct playerstructure c;
    struct playerstructure *p;
    p = &c;

    printf("Enter the name: ");
    scanf("%s",p->name);
    printf("Enter the age: ");
    scanf("%d",&p->age);
    printf("Enter the position: ");
    scanf("%s",p->position);
    printf("Enter the height: ");
    scanf("%f",&p->height);

    printf("Name\t Age\t Position\t Height\n");
    printf("%s\t %d\t %s\t %.2f",p->name,p->age,p->position,p->height);
    return 0;
}