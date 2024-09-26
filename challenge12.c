#include <stdio.h>
int main(){

int num,num1,num2,num3,num4,S;
printf("entrer 4 num");
scanf("%d",&num);
num1=num/1000;
num2=num/100%10;
num3=num/10%10;
num4=num%10;
S=(num4*1000)+(num3*100)+(num2*100)+num1;
printf("le nombre invers est :%d",S);

}