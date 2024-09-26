#include <stdio.h>

int main()
{
    
    char nome[10];
    char prenom[10];
    char age[3];
    char sexe[10];
    char email[90]
    ;

         printf("entrer le nom \n");
            scanf("%s",&nome);
         printf("entrer le prenom \n");
            scanf("%s",&prenom);
         printf("entrer le age \n");
            scanf("%s",&age);
        printf("entrer le sexe \n");
            scanf("%s",&sexe);
        printf("entrer le email \n");
            scanf("%s",&email);
        printf("vos informations personnelles est %s %s %sans %s %s",nome, prenom, age,sexe,email );

    return 0;

}