#include <stdlib.h>
#include <stdio.h>
#include "exo3.h"

void exo3() {
    int choix, tailleChoisie;
    int* tab = NULL;
    printf("Quelle version souhaitez vous lancer (1-3) ?\n");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
            printf("Choissisez la taille de votre tableau :\n");
        scanf("%d", &tailleChoisie);
        tab = allouerTableauEntiersV1(tailleChoisie);
        afficherTableau(tab, tailleChoisie);
        free(tab);
        break;
        case 2:
            printf("Choissisez la taille de votre tableau :\n");
        scanf("%d", &tailleChoisie);
        allouerTableauEntiersV2(&tab, tailleChoisie);
        afficherTableau(tab, tailleChoisie);
        free(tab);
        break;
        case 3:
            allouerTableauEntiersV3(&tab,&tailleChoisie);
        afficherTableau(tab, tailleChoisie);
        free(tab);
        break;
        default:
            printf("Mauvais choix.");
        break;
    }
}

void afficherTableau(int* tab, int const taille) {
    printf("Tableau de taille : %d.\n", taille);
    printf("Contenu du tableau :\n");
    if(tab != NULL) {
        for(int i = 0; i < taille; i++) {
            printf("%d ", tab[i]);
        }
    } else {
        printf("Tableau nul.");
    }
    printf("\n");
}

int* allouerTableauEntiersV1(int const taille) {
    int *p = calloc(taille, sizeof(int));
    return p;
}

void allouerTableauEntiersV2(int** pTab, int const taille) {
    *pTab = (int*)calloc(taille, sizeof(int)); // Rappel 1
}

void allouerTableauEntiersV3(int** pTab, int* taille) {
    printf("Choissisez la taille de votre tableau :\n");
    scanf("%d", taille);
    *pTab = (int*)calloc(*taille, sizeof(int));
}