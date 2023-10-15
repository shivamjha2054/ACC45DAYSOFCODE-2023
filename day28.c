
#include <stdio.h>

float calculator(float A, float B, char operator) {
    switch(operator) {
        case '+':
            return A + B;
        case '-':
            return A - B;
        case '*':
            return A * B;
        case '/':
            if (B == 0) {
                printf("Division by zero is not allowed.\n");
                return 0;
            }
            return A / B;
        default:
            printf("Invalid operator.\n");
            return 0;
    }
}

int main() {
    float A, B;
    char operator;

    // Input
    printf("Enter the first number (A): ");
    scanf("%f", &A);
    printf("Enter the second number (B): ");
    scanf("%f", &B);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Calculate and output the result
    float result = calculator(A, B, operator);
    printf("Result: %.6f\n", result);

    return 0;
}