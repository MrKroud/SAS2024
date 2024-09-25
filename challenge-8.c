#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float a , b , c ;
float MG;

printf("trouver la moyenne geometrique\n");
printf("entrer a");
scanf("%f",&a);
printf("entrer b");
scanf("%f",&b);
printf("entrer c");
scanf("%f",&c);

MG = pow(a * b * c,6/3);
printf("la moyenne geometrique est %.2lf",MG);

return 0;



}