#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows and columns for the matrices:\n");
    scanf("%d %d", &m, &n);

    int mat1[m][n];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    int mat2[m][n];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    int result[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           
            if (mat2[i][j] != 0) {
                result[i][j] = mat1[i][j] / mat2[i][j];
            } else {
                printf("Error: Division by zero at position (%d, %d)\n", i, j);
                return 1;
            }
        }
    }

    printf("Resultant matrix after division:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}