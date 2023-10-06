#include<stdio.h>

int main(){
  int english,physics,chemistry,maths,physical_education;
english=98;
physics=94;
chemistry=88;
maths=95;
physical_education=92;

int sum=english+physics+physical_education+maths+chemistry;
printf("Total marks obtained out of 500 is %d\n",sum);

int a=sum/5;
printf("Percentage secured is %d\n",a);

 return 0;
}