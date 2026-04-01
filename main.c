#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "fonctions.h"
#include "trislents.h"
#include "trisrapides.h"
#define TAILLE 100

int main(){
    int* tab;
    int* tab1;
    int* tab2;

    tab=allouer(TAILLE);
    tab1=allouer(TAILLE);
    tab2=allouer(TAILLE);

    initialiser(tab, TAILLE);
    copie(tab, tab1, TAILLE);
    copie(tab, tab2, TAILLE);

    afficher(tab, TAILLE);
    printf("\n");

    printf("tri rapide \n");
    trirapide(tab1, 0, TAILLE-1);
    afficher(tab1, TAILLE);
    printf("\n");

    printf("tri fusion \n");
    trifusion(tab2, 0, TAILLE-1);
    afficher(tab2, TAILLE);
    printf("\n");

    return 0;
}
