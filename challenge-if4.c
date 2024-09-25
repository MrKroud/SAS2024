#include <stdio.h>
#include <math.h>

int main(){

float a,b,c,x1,x2,x,delta;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    delta=pow (b ,2)-4*a*c;
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    x=(-b)/(2*a);
    printf("%f",delta);
    if      (delta>0)
{
    printf("%f\n%f",x1,x2);

}
   else if  (delta==0)
{    
    printf("%f",x);
    
}
   else
   {
    printf("non");
}
return 0;


}