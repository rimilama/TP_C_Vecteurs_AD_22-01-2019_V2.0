#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define NB_VECTEUR 2

typedef struct Coordonnee{
    double nX;
    double nY;
}Coordonnee;

typedef struct Vecteur{
    Coordonnee nA;
    Coordonnee nB;
    Coordonnee nVectoriel;
    double nNorme;
}Vecteur;

#endif
