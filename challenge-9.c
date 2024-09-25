#include <stdio.h>
#include <math.h>

 
 int main(){

   float D,x1,x2,y1,y2,z1,z2;

     printf(" trouver la distance entre deux points donnes dans un espace 3D\n");

 printf("entrer x1");
 scanf("%f",&x1);
 printf("entrer y1");
 scanf("%f",&y1);
 printf("entrer z1");
 scanf("%f",&z1);
 printf("entrer x2");
 scanf("%f",&x2);
 printf("entrer y2");
 scanf("%f",&y2);
 printf("entrer z2");
 scanf("%f",&z2);
   D = sqrt((pow(x2-x1,2)) + (pow(y2-y1,2)) + (pow(z2-z1,2)));
     printf("la distance entre deux points est %f",D);


 }