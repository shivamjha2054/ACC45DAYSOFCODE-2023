#include <stdio.h>

int minimum_money_needed(int X, int Y, int C) {
    // Calculate the minimum money needed
    int minimum_money = Y * C;

    // Check if Chef already has enough chocolates
    if (X >= C) {
        return 0;
    } else {
        // Calculate the additional chocolates needed
        int additional_chocolates = C - X;

        // Calculate the additional money needed
        int additional_money = additional_chocolates * Y;

        return additional_money;
    }
}

int main() {
    int X, Y, C;

    // Inputs: Number of chocolates Chef has (X), cost of 1 chocolate (Y), chocolates to gift (C)
    printf("Enter the number of chocolates Chef has: ");
    scanf("%d", &X);

    printf("Enter the cost of 1 chocolate in rupees: ");
    scanf("%d", &Y);

    printf("Enter the number of chocolates to gift: ");
    scanf("%d", &C);

    // Calculate the minimum money needed
    int minimum_money = minimum_money_needed(X, Y, C);

    printf("Minimum money needed in rupees: %d\n", minimum_money);

    return 0;
}
