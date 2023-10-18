#include <stdio.h>

int isPossible(int N, int X, int Y) {
    // Y should be divisible by X
    if (Y % X != 0) {
        return 0;
    }

    // Number of problems Chef can get X marks
    int numX = Y / X;

    // Number of problems Chef can get 0 marks
    int numZero = N - numX;

    // Chef can't get negative or more than N marks
    if (numX < 0 || numZero < 0 || numX > N) {
        return 0;
    }

    return 1;
}

int main() {
    int N, X, Y;

    printf("Enter the number of problems (N): ");
    scanf("%d", &N);

    printf("Enter the marks per problem (X): ");
    scanf("%d", &X);

    printf("Enter the desired total marks (Y): ");
    scanf("%d", &Y);

    if (isPossible(N, X, Y)) {
        printf("It is possible for Chef to achieve exactly %d marks.\n", Y);
    } else {
        printf("It is not possible for Chef to achieve exactly %d marks.\n", Y);
    }

    return 0;
}
