#include <stdio.h>
#include <stdlib.h>

int main() {
    int phy, che, math, eng, cse;

    printf("Shivam Jha \n");

    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &phy);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &che);
    printf("Enter the marks obtained in Maths: ");
    scanf("%d", &math);
    printf("Enter the marks obtained in English: ");
    scanf("%d", &eng);
    printf("Enter the marks obtained in CSE: ");
    scanf("%d", &cse);

    // Checking if any subject's marks are less than 33
	if (phy < 33){
		printf("\nYou are failed in Physics.\n"); }
	if (che < 33){
		printf("\nYou are failed in Chemistry.\n"); }
	if (math < 33){
		printf("\nYou are failed in Maths.\n"); }
	if (eng < 33){
		printf("\nYou are failed in English.\n"); }
	if (cse < 33){
		printf("\nYou are failed in CSE.\n"); }

    // Checking if any subject's marks are greater than 100
    if (phy > 100 || che > 100 || math > 100 || eng > 100 || cse > 100) {
        printf("\n\nError: Marks in a subject cannot be more than 100.\nExiting program...\n");
        exit(1);
    }

    float total = phy + che + math + eng + cse;
    float percentage = total / 500 * 100;
    float required = 33;

    printf("\nYour overall percentage obtained is %f\n", percentage);
	
    percentage >= required ? printf("\nPASS!\n") : printf("\nFAIL!\n");

return 0;
}