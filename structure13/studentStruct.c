#include <stdio.h>
struct studentStruct
{
    int id;
    char name[50];
    float marks;
};

int main() {
    struct studentStruct s = {10, "RAM", 80.00};

    printf("\nID is %d",s.id);
    printf("\nName is %s",s.name);
    printf("\nMarks is %f",s.marks);

    return 0;
}