#include <stdio.h>  

int main(){

float one,tow,tree,T,TG;
printf("entrer le 1er nomber");
scanf("%f",&one);
printf("entrer le 2em nomber");
scanf("%f",&tow);
printf("entrer le 3em nomber");
scanf("%f",&tree);

T=((one*2)+(tow*3)+(tree*5));

printf("total: %.2f\n",T);




TG=(((one*2)+(tow*3)+(tree*5))/10);

printf("total general: %.2f",TG);





}