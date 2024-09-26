#include <stdio.h>

int main() {
  int f,i,s;
  printf("entrer un nomber");
  scanf("%d",&f);
  for (i = 0; i <= 15; i++) 
  {
    s=f*i;
    printf("%d*%d=%d\n",f,i,s);
  }    
  
  return 0;
}