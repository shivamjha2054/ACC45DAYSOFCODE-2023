#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter X:");
    scanf("%d",&X);
    printf("Enter Y:");
    scanf("%d",&Y);
    

    // Calculate the time it takes for the policeman to catch the thief
    int time = 0;
    if (X > Y) {
        printf("The policeman has already caught the thief.\n");
    } else {
        time = (Y - X) / 2;
        if ((Y - X) % 2 != 0) {
            time++;
        }
        printf("The policeman will catch the thief in %d seconds.\n", time);
    }

    return 0;
}
