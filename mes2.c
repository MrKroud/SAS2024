#include <stdio.h>

int main(){

int Y=18;
   do
{
printf("entrer ton age\n");

scanf("%d",&Y);

if (Y>=18)
{
    printf("vous etes eligible pour voter\n");
}
else  

    printf("vous netes pas eligible pour voter");
}
   while( Y != 99);


}