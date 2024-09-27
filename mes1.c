#include <stdio.h>

int main(){

int LO,LA,FA,FP;
  do
{

printf("entrer la longueur\n");
scanf("%d",&LO);
printf("entrer la largeur\n");
scanf("%d",&LA);

FA=LO*LA;
FP=(LO+LA)*2;
printf("la formul pour laire est:\t%d\n",FA);
printf("la formul pour le perimetre est:\t%d",FP);

}
   while( LO,LA,FA,FP !=99);
}