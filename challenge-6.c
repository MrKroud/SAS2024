#include <stdio.h>

int main(){

//Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.
float num1,num2,S,M,K,D;
printf("entrer a\n");
scanf("%f",&num1);
printf("enter b\n");
scanf("%f",&num2);
printf("resulte est");
S=num1+num2;
M=num1-num2;
K=num1/num2;
D=num1*num2;

printf("%.2f+%.2f=%.2f\n",num1,num2,S);
printf("%.2f-%.2f=%.2f\n",num1,num2,M);
printf("%.2f/%.2f=%.2f\n",num1,num2,K);
printf("%.2f*%.2f=%.2f\n",num1,num2,D);





}