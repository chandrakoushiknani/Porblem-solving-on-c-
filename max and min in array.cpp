#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0];  // Initialize min and max with the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        } else if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 1, 9, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
