#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the natural logarithm
    result = log(number);

    printf("The natural logarithm of %lf is %lf\n", number, result);

    return 0;
}
