#include<stdio.h>
//divisiblity check of two numbers
int main(){
    int n;
    printf("Enter n = ");
    scanf("%d",&n);

    if(n%2==0 && n%5==0 && n%3==0 && n%15==0){
        printf("number is divisible");
    }
   else{
        printf("null");
    }
    return 0;
}