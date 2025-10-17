#include<stdio.h>
int main() {
    float a, b;
    float sum, difference, product, quotient;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    if (b != 0) 
        quotient = a / b;
        printf("Quotient: %.2f\n", quotient);
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    return 0;
}

