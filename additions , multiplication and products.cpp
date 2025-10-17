#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);
       sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    return 0;
}
