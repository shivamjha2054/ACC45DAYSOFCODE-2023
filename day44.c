#include<stdio.h>
int main(){
    int number = 987;
    int sum = 0;

    while(number > 0){
        int digit = number%10;
        sum += digit;
        number /= 10;
    }
    printf("Sum of digits of 987 is %d\n",sum);
    return 0;
}