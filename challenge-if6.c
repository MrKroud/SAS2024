#include <stdio.h>

int main(){

int x;
printf("entrer un nombre \n ");
  scanf("%d",&x);

if (x<0)
{
    printf("negatif");
}
else if (x>0)
{
    printf("positif");
}
else if(0 == x)
{
    printf("nule");
}
return 0;


}