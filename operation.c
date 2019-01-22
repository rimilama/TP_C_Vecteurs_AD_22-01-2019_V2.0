#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

//**************************************************************************************************************//
//
//  Description : Fonction qui effectue l'addition des 2 vecteurs et l'affiche
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void addition(Vecteur *vecteur){
    Vecteur vecteur_temp;
    vecteur_temp.nVectoriel.nX = vecteur[0].nVectoriel.nX + vecteur[1].nVectoriel.nX;
    vecteur_temp.nVectoriel.nY = vecteur[0].nVectoriel.nY + vecteur[1].nVectoriel.nY;
    printf("->AB + ->CD = ->z de coordonnee vectoriel:\nXz: %lf\nYz: %lf", vecteur_temp.nVectoriel.nX, vecteur_temp.nVectoriel.nY);
    fflush(stdin);
    getchar();
}


//**************************************************************************************************************//
//
//  Description : Fonction qui effectue la soustraction des 2 vecteurs et l'affiche
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void soustraction(Vecteur *vecteur){
    Vecteur vecteur_temp;
    vecteur_temp.nVectoriel.nX = vecteur[0].nVectoriel.nX - vecteur[1].nVectoriel.nX;
    vecteur_temp.nVectoriel.nY = vecteur[0].nVectoriel.nY - vecteur[1].nVectoriel.nY;
    printf("->AB - ->CD = ->z de coordonnee vectoriel:\nXz: %lf\nYz: %lf", vecteur_temp.nVectoriel.nX, vecteur_temp.nVectoriel.nY);
    fflush(stdin);
    getchar();
}


//**************************************************************************************************************//
//
//  Description : Fonction qui effectue la multiplication du premier vecteur avec un scalaire et l'affiche
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void multiplication(Vecteur *vecteur, int nV){
    int nA;
    printf("Rentrer un scalaire : ");
    scanf("%d", &nA);
    Vecteur vecteur_temp;
    vecteur_temp.nVectoriel.nX = vecteur[nV].nVectoriel.nX * nA;
    vecteur_temp.nVectoriel.nY = vecteur[nV].nVectoriel.nY * nA;
    if(nV==0){
        printf("->AB ");
    }else{
        printf("->CD ");
    }
    printf("* %d = ->z de coordonnee vectoriel:\nXz: %lf\nYz: %lf", nA, vecteur_temp.nVectoriel.nX, vecteur_temp.nVectoriel.nY);
    fflush(stdin);
    getchar();
}


//**************************************************************************************************************//
//
//  Description : Fonction qui effectue le produit scalaire des 2 vecteurs et l'affiche
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void prod_sacalaire(Vecteur *vecteur){
    double nTemp;
    nTemp = (vecteur[0].nVectoriel.nX*vecteur[1].nVectoriel.nX) + (vecteur[0].nVectoriel.nY*vecteur[1].nVectoriel.nY);
    printf("->AB . ->CD = %lf", nTemp);
    fflush(stdin);
    getchar();
}


//**************************************************************************************************************//
//
//  Description : Fonction qui effectue le produit vectoriel des 2 vecteurs et l'affiche
//
//  Entrées : 1 tableau de structure
//
//  Sorties : /
//
//  Notes : /
//
//***************************************************************************************************************//
void prod_vetoriel(Vecteur *vecteur){
    double nTemp;
    nTemp = (vecteur[0].nVectoriel.nX*vecteur[1].nVectoriel.nY) - (vecteur[1].nVectoriel.nX*vecteur[0].nVectoriel.nY);
    printf("->AB ^ ->CD = ->z de coordonnee vectoriel:\nXz: 0.000000\nYz: 0.000000\nZz: %lf", nTemp);
    fflush(stdin);
    getchar();
}
