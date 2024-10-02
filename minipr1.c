#include <stdio.h>
#include <string.h>
int main(){
    typedef struct{
        char titre[20];
        char auteur[20];
        float prix;
        int quantite;
    }livre;
    livre livrelist[10];
    int count = 0;


    do {
    printf("donnez le nom du livre\n");
    gets(livrelist[count].titre);
    printf("donnez le nom d'auteur\n");
    gets(livrelist[count].auteur);
    printf("donnez le prix du livre\n");
    scanf("%f" ,&livrelist[count].prix);
    printf("donnez la quantite du livre\n");
    scanf("%d" ,&livrelist[count].quantite);

    count++;

    } while (count == 10);

    printf("le nom  %s\n " ,nomber_de_contact[0].nom);
    printf("telephone %s\n ",nomber_de_contact[0].telephone);
    printf("email:%s\n ",nomber_de_contact[0].email);

}