#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of pieces (N): ");
    scanf("%d", &N);

    if (360 % N == 0) {
        printf("Chef can divide the pizza into %d pieces.\n", N);
    } else {
        printf("Chef cannot divide the pizza into %d pieces.\n", N);
    }

    return 0;
}
