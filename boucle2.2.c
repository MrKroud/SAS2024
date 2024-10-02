#include <stdio.h>

int main(){

int indis,etoile,linge;
printf("entre le nombre des linge\n");
scanf("%d",&linge);



    for(indis=0;indis<=linge;indis++){

    
    for(etoile=0;etoile<=indis;indis+2)
    {
       printf("*");
    }
    printf("\n");
    }   

return 0;
}