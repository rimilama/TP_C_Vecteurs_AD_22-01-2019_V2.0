#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

//**************************************************************************************************************//
//
//  Description : Fonction qui affiche un menu
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void menu(Vecteur *vecteur){
    int nEnd=1;
    fflush(stdin);
    do{
        system("cls");
        printf("->AB( %lf , %lf )  ->CD( %lf , %lf )\n\n", vecteur[0].nVectoriel.nX, vecteur[0].nVectoriel.nY, vecteur[1].nVectoriel.nX, vecteur[1].nVectoriel.nY);
        printf("1 - Addition\n");
        printf("2 - Soustraction\n");
        printf("3 - Produit d'un vecteur par un scalaire\n");
        printf("4 - Produit scalaire\n");
        printf("5 - Produit vectoriel\n");
        printf("ESPACE - Quitter\n");
        nEnd = choix(vecteur);
    }while(nEnd == 1);
}

//**************************************************************************************************************//
//
//  Description : Fonction qui lance le calcul choisie
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
int choix(Vecteur *vecteur){
    int nChoix = 1;
    char cChoix;
    fflush(stdin);
    cChoix = getchar();
    while(cChoix!='1' && cChoix!='2' && cChoix!='3' && cChoix!='4' && cChoix!='5' && cChoix!=' '){
        printf("\nVotre choix n'est pas disponible !\nVeuillez reessayer : ");
        fflush(stdin);
        cChoix = getchar();
    }
    if(cChoix=='1'){
        addition(vecteur);
    }else if(cChoix=='2'){
        soustraction(vecteur);
    }else if(cChoix=='3'){
        printf("Effectuer le produit avec :\n1 - le vecteur ->AD\n2 - le vecteur ->CD\n");
        fflush(stdin);
        cChoix = getchar();
        while(cChoix!='1' && cChoix!='2'){
            printf("\nVotre choix n'est pas disponible !\nVeuillez reessayer : ");
            fflush(stdin);
            cChoix = getchar();
        }
        if(cChoix=='1'){
            multiplication(vecteur, 0);
        }else{
            multiplication(vecteur, 1);
        }
    }else if(cChoix=='4'){
        prod_sacalaire(vecteur);
    }else if(cChoix=='5'){
        prod_vetoriel(vecteur);
    }else{
        nChoix = 0;
    }
    return nChoix;
}
