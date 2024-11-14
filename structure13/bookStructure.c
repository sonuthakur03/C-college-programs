// Book structure with condition of price between 500 and 1000 to print book number and book name

#include <stdio.h>

struct bookStructure
{
    int bookNum;
    char bookName[50];
    float bookPrice;
};


int main() {
    
    struct bookStructure b[5];

    printf("Enter Book details\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Book number: ");
        scanf("%d",&b[i].bookNum);
        printf("Enter the Book name: ");
        scanf("%s",b[i].bookName);
        printf("Enter the Book Price: ");
        scanf("%f",&b[i].bookPrice);
    }

    for (int i = 0; i < 5; i++)
    {
        if (b[i].bookPrice >= 500 && b[i].bookPrice <= 1000)        
        {
            printf("Book number = %d\n", b[i].bookNum);
            printf("Book name = %s\n", b[i].bookName);
        }
        
    }
    
    return 0;
}