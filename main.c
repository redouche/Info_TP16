#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/* Notes
    calloc (4, sizeof(float)) - initie à 0 les 4 espaces alouéeds
    malloc (4 * sizeof(float)) - initie à une valeur random les 4 espaces alouées
    free(f); - cela ne free pas f, mais l'adresse alouée pointée par f, par exemple 0xde
    int* tab = int tab[]
*/

int main() {
    int choix, tailleChoisie = 5;
    int* tab = NULL;
    printf("Quelle version souhaitez vous lancer (1-3) ?\n");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            tab = allouerTableauEntiersV1(tailleChoisie);
            afficherTableau(tab, tailleChoisie);
            free(tab);
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            printf("Mauvais choix.");
            break;
    }
    return 0;
}

void afficherTableau(int* tab, int const taille) {
    if(tab != NULL);
    for(int i = 0; i < taille; i++) {
        printf("%d", tab[i]);
    }
    printf("\n");
}

int* allouerTableauEntiersV1(int const taille) {
    printf("Tableau de taille : %d.\n", taille);
    printf("Contenu du tableau :\n");
    int *p = calloc(taille, sizeof(int));
    return p;
}

void allouerTableauEntiersV2(int** pTab, int const taille) {
    printf("Tableau de taille : %d", taille);
    *pTab = calloc(taille, sizeof(int));
}