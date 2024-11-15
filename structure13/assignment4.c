// WAP to enter bid, title, price, page of 100 book into 
// structure variable named book and sort them in decreasing 
// order on the basis of the title with the use of pointer.

#include <stdio.h>
#include <string.h>

struct book
{
    int id;
    char title[50];
    float price;
    int page;
};

int main()
{

    struct book b[3];
    struct book *ptr1, *ptr2, temp;

    for (int i = 0; i < 3; i++)
    {
        ptr1 = &b[i];
        printf("Enter the id: ");
        scanf("%d", &ptr1->id);
        printf("Enter the title: ");
        scanf("%s", ptr1->title);
        printf("Enter the Price: ");
        scanf("%f", &ptr1->price);
        printf("Enter the page: ");
        scanf("%d", &ptr1->page);
    }

    printf("Sorted List \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            ptr1 = &b[i];
            ptr2 = &b[j];

            if (strcmp(ptr1->title, ptr2->title) < 0)
            {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        ptr1 = &b[i]; 
        printf("ID: %d\tTitle: %s\tPrice: %.2f\tPages: %d\n", ptr1->id, ptr1->title, ptr1->price, ptr1->page);
    }

    return 0;
}