#include <stdio.h>

int main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array1[rows][cols], array2[rows][cols], sum[rows][cols];

    
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    // Input elements for the second array
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    // Calculate the sum of the two arrays
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    printf("Resultant array after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

