#include "fonctions.h"
#include <stdlib.h>
#include <stdio.h>
#define TAILLE 10

int* allouer(int taille){
    int* tab;
    tab=malloc(taille*sizeof(int));
    return tab;
}

void initialiser(int* montab, int taille){
    for(int i=0; i<taille; i++){
        montab[i]=rand()%100;
    }
}

void afficher(int* montab, int taille){
    printf("|");
    for(int i=0; i<taille; i++){
        printf("%d|", montab[i]);
    }
}

void copie(int* tableauoriginal, int* tableaucopie, int tailletableau){
    for (int i=0; i<tailletableau; i++){
        tableaucopie[i]=tableauoriginal[i];
    }
}

void echange(int* montab, int i, int j){
    int temp;
    temp=montab[j];
    montab[j]=montab[i];
    montab[i]=temp;
}

int partitionner(int* montab, int debut,int fin){
    int pivot;
    int i;
    int j;
    pivot=montab[debut];
    i=debut-1;
    j=fin+1;
    while(i<j){
        do{
            j=j-1;
        }while(montab[j]>pivot);
        do{
            i=i+1;
        }while(montab[i]<pivot);
        if(i<j){
            echange(montab, i, j);
        }
    }
    return j;
}

void fusionner(int* montab, int debut, int milieu, int fin){
    int i;
    int max;
    int gauche;
    int droite;
    int* tabtemp;
    tabtemp=allouer((fin-debut)+1);
    i=0;
    max=fin-debut;
    gauche=debut;
    droite=milieu+1;
    while(gauche<=milieu && droite<=fin){
        if(montab[gauche]<montab[droite]){
            tabtemp[i]=montab[gauche];
            gauche=gauche+1;
        }
        else{
            tabtemp[i]=montab[droite];
            droite=droite+1;
        }
        i=i+1;
    }
    while(gauche<=milieu){
        tabtemp[i]=montab[gauche];
        gauche=gauche+1;
        i=i+1;
    }
    while(droite<=fin){
        tabtemp[i]=montab[droite];
        droite=droite+1;
        i=i+1;
    }
    for (i=0; i<=max; i++){
        montab[i+debut]=tabtemp[i];
    }
    free(tabtemp);
}
