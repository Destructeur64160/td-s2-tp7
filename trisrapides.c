#include <stdlib.h>
#include <stdio.h>
#include "trisrapides.h"
#include "fonctions.h"

void trirapide(int* montab, int pas, int taille){
    int milieu;
    if(pas< taille){
        milieu = partitionner(montab, pas, taille);
        trirapide(montab, pas, milieu);
        trirapide(montab, milieu+1, taille);
    }
}

void trifusion(int* montab, int debut, int fin){
    int milieu;
    if(debut<fin){
        milieu=(debut+fin)/2;
        trifusion(montab, debut, milieu);
        trifusion(montab, milieu+1, fin);
        fusionner(montab, debut, milieu, fin);
    }
}
