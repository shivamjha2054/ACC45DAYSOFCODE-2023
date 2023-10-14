#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = num * 2;

    printf("The result of multiplying %d by 2 is: %d\n", num, result);

    return 0;
}
