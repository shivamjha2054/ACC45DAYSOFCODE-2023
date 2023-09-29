#include<stdio.h>
//maximum number
int main(){
int a,b,c;
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
printf("Enter c:");
scanf("%d",&c);

if(a>b){
    printf("%d is maximum",a);
}
else if(b>c){
    printf("%d is maximum",b);
}
else{
    printf("%d is maximum",c);
}
return 0;
}