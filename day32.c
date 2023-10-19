#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);

    int X; 
    scanf("%d", &X);

    int eligibleVoters = 0;

    for (int i = 0; i < N; i++) {
        int Ai; 
        scanf("%d", &Ai);

        if (Ai >= X) {
            eligibleVoters++;
        }
    }

    printf("Number of eligible voters: %d\n", eligibleVoters);

    return 0;
}
