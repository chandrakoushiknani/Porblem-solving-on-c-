#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions of the second matrix
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns of first matrix must equal number of rows of second matrix.\n");
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Initialize result matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

