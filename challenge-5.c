#include <stdio.h>

int main(){

//Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :
//C < 0 : Solide
//0 <= C < 100 : Liquide
//C >= 100 : Gaz

int c,x;
x=0;
printf("entrer la temperature en celsius");
scanf("%d",c);
c=x<0;
printf("solide");
scanf("%d",c);
c=0<x<100;
printf("liquide");
scanf("%d",c);
c=x>100;
printf("gaz");





}