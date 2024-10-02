#include <stdio.h>
#include <stdlib.h>


int main(){
    int num;
do{
    printf("entrer un nombre : ");
    scanf("%d", &num);
    
    for(int i = 1 ; i <= num ; i++)
    {
        int i;
        if (i%2==0)
            continue;
        else 
        printf("le nombere est ",num);

        
    }

    printf("nombres impairs %d", num);

    return 0;

}while(num!=99)  ;
}