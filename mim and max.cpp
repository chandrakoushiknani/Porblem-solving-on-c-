#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int max, min;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Assume the first number is both max and min
    max = num1;
    min = num1;

    // Finding the maximum number
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }

    // Finding the minimum number
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    if (num4 < min) {
        min = num4;
    }

    // Output the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
