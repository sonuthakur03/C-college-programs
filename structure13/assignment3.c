// WAP tp enter id, name and address of 25 employee into sturcture variable 
// called employee and sort them in ascending order on the basis of the name 
// with the use of pointer.

#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[50];
    char address[50];
};

int main()
{

    struct employee e[3];
    struct employee *ptr1, *ptr2, temp;

    for (int i = 0; i < 3; i++)
    {
        ptr1 = &e[i];
        printf("Enter the id: ");
        scanf("%d", &ptr1->id);
        printf("Enter the name: ");
        scanf("%s", ptr1->name);
        printf("Enter the address: ");
        scanf("%s", ptr1->address);
    }

    printf("Sorted List \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            ptr1 = &e[i];
            ptr2 = &e[j];

            // Compare the names using strcmp()
            if (strcmp(ptr1->name, ptr2->name) > 0)
            {
                // Swap the employee data if names are in the wrong order
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        ptr1 = &e[i]; // Pointer to the current employee
        printf("ID: %d\tName: %s\tAddress: %s\n", ptr1->id, ptr1->name, ptr1->address);
    }

    return 0;
}