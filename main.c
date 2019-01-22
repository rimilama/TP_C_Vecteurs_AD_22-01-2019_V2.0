#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "init.h"
#include "menu.h"

int main()
{
    Vecteur vecteur[NB_VECTEUR];
    crea_vecteur(vecteur);
    menu(vecteur);
}

