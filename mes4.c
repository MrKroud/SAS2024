#include <stdio.h>


int main() {
    int ti,t[4];
    ti=sizeof(t)/sizeof(t[0]);
    
for(int i=0;i<ti;i++){
    printf("entrer un nomber :\n");
    scanf("%d",&t[i]);
}

int min=t[0], max=t[0];

for(int i=1;i<ti;i++){
    if (t[i]<min){
        min=t[i];
    }
    
    if(t[i]>max){
        max=t[i];
    }
    
    
}
        printf("min : %d",min);
        printf("\nmax : %d",max);
        
    return 0;
}