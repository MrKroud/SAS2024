#include <stdio.h>

int main(){

int n,i,T;
printf("entrer n\n");
scanf("%d",&n);

T=1;

for (i=1 ; i<=n ; i++)

T=T*i;

printf("la valeur et %d",T);

return 0;

}