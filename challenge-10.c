#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

const float p=3.14;
float r,V;

printf("trouver le volume d une sphere\n");
printf("entrer p");
scanf("%f",&p);
printf("entrer r");
scanf("%f",&r);
V=(4/3) * p * pow (r , 3) ;

printf("le volume de sphere est %.2f",V);

return 0;




}