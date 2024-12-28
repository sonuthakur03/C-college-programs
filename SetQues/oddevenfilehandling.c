// Wap to print odd numbers into odd file and even into even file.

#include <stdio.h>

int main() {
    FILE*oddFile,*evenFile;

    oddFile = fopen("oddFile.txt","w");
    evenFile = fopen("evenFile.txt","w");
    int n[3];
    printf("Enter numbers: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&n[i]);
        if (n[i] % 2 == 0)
        {
            fprintf(evenFile,"%d\t",n[i]);
        }else{
            fprintf(oddFile,"%d\t",n[i]);
        }
        
    }

    fclose(oddFile);
    fclose(evenFile);
    
    return 0;
}