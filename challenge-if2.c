#include <stdio.h>

int main(){

char C;
printf("entrer un caractere");
scanf("%c",&C);


switch (C)
{
case 'a':
    printf("%c est un voyelle\n");
    break;
case 'e':
    printf("%c est un voyelle\n");
    break;
case 'i':
    printf("%c est un voyelle\n");
    break;
case 'o':
    printf("%c est un voyelle\n");
    break;
case 'u':
    printf("%c est un voyelle\n");
    break;
case 'y':
    printf("%c est un voyelle\n");
    break;    

default:
   printf("%c ent un letre");
   
    break;
}



}