#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3, cols = 3;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > i) {
                matrix[i][j] = 0; // Make upper triangular elements 0
            }
        }
    }

    printf("Lower triangular matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

