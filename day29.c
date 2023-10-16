#include <stdio.h>

int can_buy_subscription(int A, int B, int C, int X) {
    int contributions[3] = {A, B, C};

    // Sort the contributions in non-decreasing order
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (contributions[i] > contributions[j]) {
                int temp = contributions[i];
                contributions[i] = contributions[j];
                contributions[j] = temp;
            }
        }
    }

    // Check if the sum of the two smallest contributions is greater than or equal to X
    if (contributions[0] + contributions[1] >= X)
        return 1;
    else
        return 0;
}

int main() {
    int A = 100;  // Alice's contribution in rupees
    int B = 150;  // Bob's contribution in rupees
    int C = 120;  // Charlie's contribution in rupees
    int X = 200;  // Netflix subscription cost in rupees

    // Check if any two of them can contribute to buy a subscription
    int result = can_buy_subscription(A, B, C, X);

    if (result)
        printf("Yes, at least two of them can contribute to buy a Netflix subscription.\n");
    else
        printf("No, no two of them can contribute enough to buy a Netflix subscription.\n");

    return 0;
}
