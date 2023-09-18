#include<stdio.h>
#include<math.h>
//divisible->1
//not divisible->0

int main(){
   int x;
   printf("enter a number");
   scanf("%d",&x);
   printf("%d",x%4==0);
   return 0;
   
}