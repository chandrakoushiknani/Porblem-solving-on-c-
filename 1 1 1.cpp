#include <stdio.h>

int main() {
    int i, j;
    int rows = 4;  // You can change this to increase or decrease the number of rows

    // Loop to print each row
    for (i = 1; i <= rows; i++) {
        // Loop to print stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing stars in a row
        printf("\n");
    }

    return 0;
}
