#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, sum, product;

    // Prompt user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform calculations
    sum = num1 + num2;
    product = num1 * num2;

    // Display results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
