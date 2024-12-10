//   01. WAP to print employee id, name, post, salary using file handling in "empdata.txt".
 
 #include <stdio.h>

 int main() {
     FILE *fptr;
     int id;
     char name[100], post[100];
     float salary;

     printf("Enter Employee Id: ");
     scanf("%d",&id);
     printf("Enter Employee name: ");
     scanf("%s",name);
     printf("Enter Employee post: ");
     scanf("%s",post);
     printf("Enter Employee salary: ");
     scanf("%f",&salary);

     fptr = fopen("empData.txt","w");
     fprintf(fptr, "%d %s %s %f\n",id,name,post,salary);
     printf("Id: %d \t Name: %s \t Post: %s \t Salary: %f \n",id, name, post, salary);

     fclose(fptr);
     return 0; 
 }