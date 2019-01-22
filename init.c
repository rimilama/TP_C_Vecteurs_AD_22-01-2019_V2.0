#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "init.h"

//**************************************************************************************************************//
//
//  Description : Fonction qui crée 2 vecteurs
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void crea_vecteur(Vecteur *vecteur){
    int nI;
    for(nI=0;nI<NB_VECTEUR;nI++){
        if(nI==0){
            printf("Soit un premier vecteur ->AB");
        }else{
            printf("Soit un autre vecteur ->CD");
        }
        printf(" :\nCoordonnee du premier point:\nX: ");
        scanf("%lf", &vecteur[nI].nA.nX);
        printf("\nY: ");
        scanf("%lf", &vecteur[nI].nA.nY);
        printf("\nCoordonnee du second point:\nX: ");
        scanf("%lf", &vecteur[nI].nB.nX);
        printf("\nY: ");
        scanf("%lf", &vecteur[nI].nB.nY);
        vecteur[nI].nVectoriel.nX = vecteur[nI].nB.nX - vecteur[nI].nA.nX;
        vecteur[nI].nVectoriel.nY = vecteur[nI].nB.nY - vecteur[nI].nA.nY;
        vecteur[nI].nNorme = sqrt(pow(vecteur[nI].nVectoriel.nX, 2) + pow(vecteur[nI].nVectoriel.nY, 2));
        system("cls");
    }
}
