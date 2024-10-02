#include <stdio.h>
#include <string.h>

int main(){
    typedef struct{

        char nom   [20];
        char tele  [20];
        char email [40];
        
    }contac;

    contac contaclist[3];

    int nomber_de_contact = 0;

        void ajoute();
        void supprimer();
        void modifier();
        void aficher();
        void recherch();
    

        ajoute();
        modifier();
        supprimer();
        aficher();
        recherch();
    return;



void ajoute(){ 
     
     char nom[20];
    
int choix = 1;

    do {
    
    
        printf(" donnez le nom: \n");
        scanf("%s",&contaclist[nomber_de_contact].nom);
        
        printf(" donnez le tele:\n");
        scanf("%s",&contaclist[nomber_de_contact].tele);
        
        printf(" donnez le email:\n");
        scanf("%s",&contaclist[nomber_de_contact].email);
        
        nomber_de_contact=nomber_de_contact+1;        
    
    
    

    printf("=============================\n");
    printf(" \n ==========si voulez vous ajoute d'autres contacts ?? ========== ");
    printf(" \n entre quelque chose pour ajouter ");
    printf(" \n entre 0 pour exit ");

    

    } while (nomber_de_contact <= 3);
   
    }
     

void modifier(){ 

    char nom[20];

    for(int i = 0 ; i < 3; i++)
    {
        if(strcmp(nom,contaclist[i].nom)==0)
        {
            printf("entrer le nouv nom");
            scanf("%s",&contaclist[i].nom);

            printf("entrer le nouv tele");
            scanf("%s",&contaclist[i].tele);

            printf("entrer le nouv email");
            scanf("%s",&contaclist[i].email);
            break;
        }

    }
      return;
    
    }

void supprimer(){
    char nom[20];
        if(contaclist==0)
        {
            printf("no contact");
        }
        else 
        {
            char contactlist[3];
            int nomber_de_contact =0;
            printf("entrer le nom");
            scanf("%[^\n]",contaclist);
        }
        for(int i=0 ; i<contaclist; i++)
        {
            if(strcmp(nom,contaclist[i].nom)==0){
                for(int i=0 ; i<contaclist-1 ; i++)
                {
                contaclist[i]=contaclist[i+1];
                }
                nomber_de_contact--;
            }
            break;
        }return;
}

void aficher(){ 

        for(int i = 0; i < nomber_de_contact ; i++)
    {
    printf("le nom       %s\n ",contaclist[i].nom);
    printf("le tele %s\n ",contaclist[i].tele);
    printf("le email     %s\n ",contaclist[i].email);
    }
 }
 void rechrche(){

        for (int i = 0 ; i < nomber_de_contact ; i++)


 }
}







