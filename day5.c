#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if(age<18){
        printf("you are not adult\n");
    }
    else(age>=18);
    {
        printf("you are adult\n");
    
    }
    return 0;
}