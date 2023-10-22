#include <stdio.h>

int canMeasureWeight(int W, int X, int Y, int Z) {
    if (W == 0) {
        return 1; 
    }
    if (W < 0 || (W > 0 && X <= 0 && Y <= 0 && Z <= 0)) {
        return 0; 
    }
    int usingX = canMeasureWeight(W - X, X, Y, Z);
    int usingY = canMeasureWeight(W - Y, X, Y, Z);
    int usingZ = canMeasureWeight(W - Z, X, Y, Z);

        if (usingX || usingY || usingZ) {
        return 1;
    }
return 0; 
}

int main() {
    int W, X, Y, Z;
    printf("Enter the weight of the object (W): ");
    scanf("%d", &W);
    printf("Enter X");
    scanf("%d",&X);
     printf("Enter Y");
    scanf("%d",&Y);
     printf("Enter Z");
    scanf("%d",&Z);

    if (canMeasureWeight(W, X, Y, Z)) {
        printf("YES, Chef can measure the weight exactly.\n");
    } else {
        printf("NO, Chef cannot measure the weight exactly.\n");
    }

    return 0;
}
