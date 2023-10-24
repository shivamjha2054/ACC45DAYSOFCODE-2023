#include <stdio.h>

int main() {
    int S, X, Y, Z;

    printf("Enter total storage (S MB): ");
    scanf("%d", &S);
    printf("Enter memory occupied by app 1 (X MB): ");
    scanf("%d", &X);
    printf("Enter memory occupied by app 2 (Y MB): ");
    scanf("%d", &Y);
    printf("Enter memory requirement of the new app (Z MB): ");
    scanf("%d", &Z);

    int spaceOccupied = X + Y;

    int spaceNeeded = Z;

    int appsToDelete = 0;

    if (spaceNeeded > S) {
        appsToDelete = 2; 
    } else if (spaceNeeded > S - spaceOccupied) {
        appsToDelete = 1; 
    }

    printf("Minimum number of apps Chef needs to delete: %d\n", appsToDelete);

    return 0;
}
