// matrix multiply

#include <stdio.h>

int main() {
    int a[2][2], b[2][2], i, j, k, product[2][2] = {0};

    printf("Enter matrix elements for a and b turnwise: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d %d", &a[i][j], &b[i][j]);
        }
    }

    // Performing matrix multiplication
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            product[i][j] = 0; // Initialize the product matrix element
            for (k = 0; k < 2; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices is: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
