#include "trislents.h"

void triselection(int* montab, int taille){
    int min;
    for (int i=0; i<taille; i++){
        min=i;
        for (int j=i; j<taille; j++){
            if (montab[j]<montab[min]){
                min=j;
            }
        }
        echange(montab, i, min);
    }
}

void tribulles(int* montab, int taille){
    int echanger;
    echanger = 1;
    while(echanger==1){
        echanger=0;
        for(int j=0; j<taille-1; j++){
            if (montab[j]>montab[j+1]){
                echanger=1;
                echange(montab, j , j+1);
            }
        }
    }
}

void triinsertion(int* montab, int taille){
    int j;
    for(int i=1; i<taille; i++){
        j=i;
        while(j>0 && montab[j-1]>montab[j]){
            echange(montab, j-1, j);
            j=j-1;
        }
    }
}