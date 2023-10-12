#include <stdio.h>
#include <math.h>

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the natural logarithm
    double result = log(number);

    printf("The natural logarithm of %lf is %lf\n", number, result);

    return 0;
}
