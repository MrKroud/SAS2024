#include <stdio.h>
int main(){
    

int MO;

    printf("entre la note");
    scanf("%d",&MO);
    if (MO<10)
    {
        printf(" recale ");
    }
    else if (MO>=10&&MO<=12)
    {
        printf("mention passable");
    }
    else if (MO>=12&&MO<=14)
    {
        printf("assez bien");
    }
    else if (MO>=14&&MO<=16)
    {
        printf("mention bien");
    }
    else
    {
        printf("mention très bien");
    }
}

