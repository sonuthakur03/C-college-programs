// Create a structure named student with members rollno, name, address. Write a program that displays name of any those students whose addressing is kathmandu.

#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    char name[50];
    char address[100];
};

int main() {
    struct student s[5];

    printf("Enter Student Records\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the roll\n");
        scanf("%d",&s[i].roll);
        printf("Enter the name\n");
        scanf("%s",s[i].name);
        printf("Enter the address\n");
        scanf("%s",s[i].address);
    }

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(s[i].address,"kathmandu") == 0)
        {
            printf("%d %s %s\n",s[i].roll,s[i].name,s[i].address); 
        }
        
    }
    
    return 0;
}