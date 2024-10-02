#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

int n ,i;



    do
{


     printf("entrer un nombre : \n");
     scanf("%d", &n);
for ( i = 2 ; i < n ; i++)
{
  if ( n % i != 0)
  {
    printf("cest un nomber premier");
  }

}
printf("ce nest pas un nomber premier");
        return 0;
    
 
 
 } while(n != 99);



}