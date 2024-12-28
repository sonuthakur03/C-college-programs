// wap to ask order of 2 matrices and read these matrices and multiply them if possible using c 

#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    
    // Reading the order of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m1, &n1);
    
    // Reading the order of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &m2, &n2);
    
    // Check if multiplication is possible
    if (n1 != m2) {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 0;  // Exit the program
    }

    // Declare the matrices
    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n2];

    // Reading the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Reading the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Printing the result matrix
    printf("The product of the matrices is:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
