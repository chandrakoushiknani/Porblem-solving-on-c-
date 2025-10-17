#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i;
    int *array;
    int sum = 0;

    // Prompt user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit if memory allocation fails
    }

    // Get array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Calculate the sum of elements
    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    // Print the sum
    printf("Sum of array elements: %d\n", sum);

    // Free the allocated memory
    free(array);

    return 0;
}

