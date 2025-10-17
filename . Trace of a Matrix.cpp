#include <stdio.h>

int main() {
    int n, i, j, trace = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                trace += matrix[i][j];
            }
        }
    }

    printf("The trace of the matrix is: %d\n", trace);
    return 0;
}

