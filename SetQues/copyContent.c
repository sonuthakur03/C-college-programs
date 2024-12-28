// WAP to copy the content of student.txt file into info.txt

#include <stdio.h>

int main() {
    FILE*srcFile,*destFile;
    char ch;

    srcFile = fopen("student.txt","r");

    destFile = fopen("info.txt","w");

    while ((ch = fgetc(srcFile))!= EOF)
    {
        fputc(ch,destFile);
    }

    printf("File copied");

    fclose(srcFile);
    fclose(destFile);
    
    return 0;
}