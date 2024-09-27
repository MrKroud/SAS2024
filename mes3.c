#include <stdio.h>

int main(){

int n;
    do
{
     printf("entrer un nombre : \n");
     scanf("%d", &n);
    
    
        int i=1;

        if ( n % i== 0 )
        {
          printf("ce nest pas un nomber premie\n");
        }
        continue;
            
        if ( n % i == n) 

          printf("cest un nomber premier\n");
    
    
 }
    while(n != 99);



}