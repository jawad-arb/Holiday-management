#include "absence/Absense.h"
#include "employee/Employee.h"
#include "demande/Demande.h"
#include<stdio.h>
#include<stdlib.h>

//le nume de tele dans affichage


int choix,choix1,x;
void helpCent(void);
void menu(){
    printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t    application de gestion des congees ");
    printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  menu  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("\t\t\t   1-->> gestion des employes \n\n");
    printf("\t\t\t   2-->> gestion des demande \n\n");
    printf("\t\t\t   3-->> gestion des absences \n\n");
    printf("\t\t\t   4-->> statistiques \n\n");
    printf("\t\t\t   5-->> quitter le programme \n\n");
    printf("\t\t\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("\t\t\tvotre choix:");
    scanf("%d",&choix);
    sous_menu(choix);
    printf("\n");
    
}

void sous_menu(int choix){
    switch(choix){
        case 1 :
            system("cls");
            printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("\t\t\t    gestion de employee ");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("\t\t\t   1-->> ajouter un employee \n\n");
            printf("\t\t\t   2-->> supprimer un employee \n\n");
            printf("\t\t\t   3-->> rechercher un employee \n\n");
            printf("\t\t\t   4-->> afficher tout les employees \n\n");
            printf("\t\t\t   5-->> retour \n\n");
            printf("\t\t\t   6-->> quitter \n\n");
            printf("\t\t\tvotre choix:");
            scanf("%d",&x);
            gere_employe(x);
            break;
        
        case 2:
            system("cls");
            printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("\t\t\t    gestion de demande ");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("\t\t\t   1-->> ajouter un demande \n\n");
            printf("\t\t\t   2-->> supprimer un demande \n\n");
            printf("\t\t\t   3-->> rechercher un demande \n\n");
            printf("\t\t\t   4-->> afficher tout mes demandes \n\n");
            printf("\t\t\t   5-->> retour \n\n");
            printf("\t\t\t   6-->> quitter \n\n");
            printf("\t\t\tvotre choix:");
            scanf("%d",&x);
            gere_demande(x);
            break;
        

        case 3: 
            system("cls");
            printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("\t\t\t    gestion de absence ");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("\t\t\t   1-->> ajouter un absence \n\n");
            printf("\t\t\t   2-->> supprimer un absence \n\n");
            printf("\t\t\t   3-->> rechercher un absence \n\n");
            printf("\t\t\t   4-->> afficher tout mes absence \n\n");
            printf("\t\t\t   5-->> retour \n\n");
            printf("\t\t\t   6-->> quitter \n\n");
            printf("\t\t\tvotre choix:");
            scanf("%d",&x);
            gere_absence(x);
            break;
        case 4:
            system("cls");
            printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("\t\t\t\t statistique ");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("\t\t   1-->> statistique sur les employees \n\n");
            printf("\t\t   2-->> statistique sur les demandes de congees \n\n");
            printf("\t\t   3-->> statistique sur les absences \n\n");
            printf("\t\t   4-->> retour \n\n");
            printf("\t\t   5-->> quitter \n\n");
            printf("\t\tvotre choix:");
            scanf("%d",&x);
            gere_statistique(x); 
        case 5:
            system("cls");
            printf("\t\t fin de programme \n");
            break;   

    }
}

//gere les employe

void gere_employe(int x){
    int x1;
    switch(x){
        system("cls");
        case 1 :
            system("cls");
            ajoutEmp();
            helpCent();
            break;
        case 2 :
            system("cls");
            suppEmp();
            helpCent();
            break;
        case 3 :
            system("cls");
            rechercheEmp();
            helpCent();
            break;
        case 4 :
               system("cls");
               afficheToutEmp();
               helpCent();
                break;
           
        case 5 :
                system("cls");
                menu();
        case 6:
                system("cls");
                printf("fin de programme\n");
                break;
            
    }

    

}

void gere_demande(int x){
    

    switch(x){
        system("cls");
        case 1 :
            system("cls");
            ajouteDemande();
            helpCent();
            break;
         case 2 :
            system("cls");
            suppDemande();
            helpCent();
            break;
         
          case 3 :
                system("cls");
              RechercheDemande();
              helpCent();
              break;
          
           case 4 :
           system("cls");
              afficheAllDemande();
              helpCent();
              break;
            case 5 :
                system("cls");
                menu();
            case 6:
                system("cls");
                printf("\t\t fin de programme\n");
                break;
            

    }
    
}

void gere_absence(int x){
    switch(x){
        system("cls");
        case 1 :
        system("cls");
            ajouteAbs();
            helpCent();
            break;
         case 2 :
         system("cls");
            suppAbs();
            helpCent();
            break;
         
          case 3 :
          system("cls");
              rechercheAbs();
              helpCent();
              break;
          
           case 4 :
           system("cls");
              AfficheAllAbs();
              helpCent();
              break;
            case 5 :
            system("cls");
                menu();
            case 6:
            system("cls");
            printf("fin de programme\n");
                break;
    }
    

}

void gere_statistique(int x){
        
    switch(x){
        system("cls");
        case 1 :
            system("cls");
            printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("\t\t\t statistique sur les employees\n");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("\t\t\tnombre des employees               ---->>> %d \n\n",NbrOfEmploye());
            helpCent();
            break;
        case 2 :
            system("cls");
            printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("\t\t\t statistique sur les demandes\n");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("\t\t\tnombre des demandes payee          ---->>> %d \n\n",NbrDemandePayee());
            printf("\t\t\tnombre des demandes non payee      ---->>> %d \n\n",NbrDemandeImPayee());
            printf("\t\t\tnombre des demandes urgent         ---->>> %d \n\n",NbrDemandeUrgent());
            helpCent();
            break;
        case 3 :
            system("cls");
            printf("\n\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("\t\t\t statistique sur les absences\n");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("\t\t\tnombre des absences de maladie     ---->>>  %d \n\n",NbrAbsenceMaladie());
            printf("\t\t\tnombre des absences de formation   ---->>>  %d\n\n",NbrAbsenceFormation());
            printf("\t\t\tnombre des absences reunion        ---->>>  %d\n\n",NbrAbsenceReunion());
            printf("\t\t\tnombre des absences injustifiee    ---->>>  %d\n\n",NbrAbsenceInjustifie());
            helpCent();
            break;
        case 4 :
            system("cls");
            menu();
            break;
        case 5 :
            system("cls");
            break;
    }
    
    }

/**
 * @brief methode: 1-->retour au menu 2-->quitter le programme
 * @param int x
 * @return void 
*/
void helpCent(){
    int x1;
    printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t   1-->retour au menu \n");
    printf("\t\t   2-->quitter \n");
    printf("\t\tvotre choix :");
    scanf("%d",&x1);
    switch(x1){
        case 1:
            system("cls");
            menu();
            break;
        case 2:
            printf("\t\t   fin de programme \n");
            printf("\n\t   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            break;
        default :
            printf("\t\t   choix incorrect !!!!\n");
            break;
    }
}


int main(){

    menu();

    return 0;
}


