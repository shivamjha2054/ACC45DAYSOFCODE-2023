#include<stdio.h>
int main(){
//  factorial of a number
int n;
printf("Enter n:");
scanf("%d",&n);

int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
printf("factorial is=%d\n",fact);
return 0;
}