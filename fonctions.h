#ifndef __fonctions_H_
#define __fonctions_H_

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 26/03/2026 */
/* Résumé : fonction qui permet d'allouer un tableau dynamique d'entiers */
/* Entrée : la taille voulue du tableau */
/* Sortie : un tableau dynamique d'entiers */
int* allouer(int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 26/03/2026 */
/* Résumé : une procédure qui permet d'initialiser toutes les cases de la matrice */
/* Entrées : taille un entier et mon tab un tableau dynamque d'entier */
void initialiser(int* montab, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 26/03/2026 */
/* Résume : procédure qui permet d'afficher le tableau*/
/* Entrées : montab un tableau dynamique d'entier et taille un entier */
void afficher(int* montab, int taille);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 26/03/2026 */
/* Résumé : procedure qui permet de copier une fonction dans un autre*/
/* Entrées : tableau d'origine et tableau copie deux tableaux dynamique d'entier et taille Tbaleau la taille des tableau */
void copie(int* tableauoriginal, int* tableaucopie, int tailletableau);

/* Auteur : Kevin Jean-Paul Philippe Jallet */
/* Date : 26/03/2026 */
/* Résumé : procédure qui echange deux valeurs dans un tableau */
/* Entrées : montab un tableau dynamique d'entier et i et j deux entier*/
void echange(int* montab, int i, int j);

int partitionner(int* montab, int debut, int fin);

#endif