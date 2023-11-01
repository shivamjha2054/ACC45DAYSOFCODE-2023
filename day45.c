#include <stdio.h>

int main() {
    int N, M;

    printf("Enter the number of friends (N): ");
    scanf("%d", &N);
    printf("Enter the number of left shoes Chef already has (M): ");
    scanf("%d", &M);

    int extra_shoes = (N * 2) - M;

    if (extra_shoes < 0) {
        extra_shoes = 0; // Chef already has enough shoes for all friends
    }

    printf("Chef must buy at least %d extra shoes.\n", extra_shoes);

    return 0;
}
