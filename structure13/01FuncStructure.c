// Function with structure

#include <stdio.h>

// Define a structure for student details
struct student
{
    int roll;      // Roll number of the student
    char name[50]; // Name of the student
    float marks;   // Marks obtained by the student
};

// Function to display student details
void display(struct student s)
{
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.roll);  // Print roll number
    printf("Name: %s\n", s.name);     // Print name
    printf("Marks: %.2f\n", s.marks); // Print marks with two decimal places
}

int main()
{
    struct student s;

    // Input student details from the user
    printf("Enter the roll no: ");
    scanf("%d", &s.roll);

    printf("Enter the name: ");
    scanf("%s", s.name);

    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    // Call the display function to show the entered student details
    display(s);

    return 0;
}