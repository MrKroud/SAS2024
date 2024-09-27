#include <stdio.h>
#include <stdlib.h>


int main(){

    int num,res;

    do {
        printf("entrer un nombre : ");
        scanf("%d", &num);
        res = num;
        for(int i = 1  ; i <= num ; i++)
        {
            res += num-i;
        }

        printf("La somme cette nombre equal %d \n", res);
    }while(num != 1000);

    return 0;

}       