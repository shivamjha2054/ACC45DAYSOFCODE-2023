#include <stdio.h>
int main() {
float basicSalary, grossSalary;
float hra, da;
printf("Enter the basic salary: ");
scanf("%f", &basicSalary);
if (basicSalary >= 30000) {
hra = 0.30 * basicSalary;
da = 0.95 * basicSalary;
} else if (basicSalary >= 20000) {
hra = 0.25 * basicSalary;
da = 0.90 * basicSalary;
} else if (basicSalary >= 10000) {
hra = 0.20 * basicSalary;
da = 0.80 * basicSalary;
} else {
hra = 0.10 * basicSalary;
da = 0.50 * basicSalary;
}
grossSalary = basicSalary + hra + da;
// Display the gross salary
printf("Gross Salary: %.2f\n", grossSalary);
return 0;
}