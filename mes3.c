#include <stdio.h>

int main(){

int n;
int i=2;
    do
{
     printf("entrer un nombre : \n");
     scanf("%d", &n);
        
        if ( n % i == 0 && n!=i) 
        {
          printf("ce nest pas un nomber premie\n");
        }
        
        else

          printf("cest un nomber premier\n");
        i++;
 }
    while(n != 99);



}