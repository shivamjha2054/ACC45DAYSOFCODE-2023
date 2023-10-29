#include <stdio.h>
int main() {
float costPrice, sellingPrice, profitOrLoss;
printf("Enter the cost price: ");
scanf("%f", &costPrice);
printf("Enter the selling price: ");
scanf("%f", &sellingPrice);
// Calculate profit or loss
profitOrLoss = sellingPrice - costPrice;
if (profitOrLoss > 0) {
printf("You made a profit\n");
} else if (profitOrLoss < 0) {
printf("You incurred a loss\n");
} else {
printf("Neither profit nor loss\n");
}
return 0;
}