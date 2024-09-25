#include <stdio.h>
#include <stdlib.h>

int main(){

int v1,v2,v3;
printf("entre la valeur a et b\n");
scanf("%d",&v1);

scanf("%d",&v2);

if (v1==v2)
{
    v3=(v1+v2)*3;
}else{
    
    v3=v1+v2;
}

     printf("resault %d",v3);
     return 0;


}