#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is not possible. The number of columns in matrix A must equal the number of rows in matrix B.\n");
        return 0;
    }
    int A[r1][c1], B[r2][c2], C[r1][c2];
    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("The result of matrix multiplication is:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

