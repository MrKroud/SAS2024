#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int annee, mois, jours, heures, minutes, secondes;

    printf("entrer un annee");

    scanf("%d", &annee);

    mois=annee*12;
    jours=mois*30;
    heures=jours*24;
    minutes=heures*60;
    secondes=minutes*60;

    
    
    printf("%d\n%d\n%d\n%d\n%d",mois,jours,heures,minutes,secondes);

    return 0;



}