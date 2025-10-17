#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 6};  // Original array with duplicates
    int n = 8;                             // Number of elements in the array

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If duplicate is found
            if (arr[i] == arr[j]) {
                // Shift elements left to remove the duplicate
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  // Reduce size of array after removing duplicate
                j--;  // Adjust index after shifting elements
            }
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
