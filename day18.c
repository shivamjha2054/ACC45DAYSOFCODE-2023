#include<stdio.h>
// swapping of two numbers
int main(){
    int a,b;
    a=5;
    b=6;


    a=a^b;
    b=a^b;
    a=a^b;

    printf("%d",a);

 return 0;
}