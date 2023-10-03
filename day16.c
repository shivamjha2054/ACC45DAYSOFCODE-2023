#include<stdio.h>

int main(){
    int P,R,T;
    printf("Enter P:");
    scanf("%d",&P);
    printf("Enter R:");
    scanf("%d",&R);
    printf("Enter T:");
    scanf("%d",&T);

    float SI = (P*R*T)/100;
    printf("SI is:%f",SI);


    return 0;
}