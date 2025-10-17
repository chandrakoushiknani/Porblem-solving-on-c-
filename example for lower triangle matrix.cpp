#include <stdio.h>

int main() {
    int n, i, j, isLower = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][j] != 0) {
                isLower = 0;
                break;
            }
        }
        if (!isLower) break;
    }

    if (isLower)
        printf("The matrix is a lower triangular matrix.\n");
    else
        printf("The matrix is not a lower triangular matrix.\n");

    return 0;
}

