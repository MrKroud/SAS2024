#include <stdio.h>

int main(){

char C;
printf("entrer un caractere");
scanf("%s",&C);

do
{

switch (C)
{
case 'a': case 'A':
    printf("est un voyelle\n");
    break;
case 'e':
    printf(" est un voyelle\n");
    break;
case 'i':
    printf(" est un voyelle\n");
    break;
case 'o':
    printf("est un voyelle\n");
    break;
case 'u':
    printf(" est un voyelle\n");
    break;
case 'y':
    printf(" est un voyelle\n");
    break;    

default:
   printf(" ent un letre\n");
   
    break;
}
scanf("%s",&C);

}while (C != 99);



}