#include <stdio.h>

int main() {
    int X, Y, A, B;
    
    printf("Enter X");
    scanf("%d",&X);
    printf("Enter Y");
    scanf("%d",&Y);
    printf("Enter A");
    scanf("%d",&A);
    printf("Enter B");
    scanf("%d",&B);

    
    int temperature_diff = B - A;
    

    if ((temperature_diff > 0 && X >= temperature_diff) || (temperature_diff < 0 && Y >= -temperature_diff)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
