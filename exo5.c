#include "exo5.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void creerMatrice(int*** matrice, int* nbLig, int* nbCol) {
    printf("Combien de lignes ?\n");
    scanf("%d", nbLig);
    printf("Combien de colonnes ?\n");
    scanf("%d", nbCol);

    *matrice = malloc(*nbLig * sizeof(int*));
    for (int i = 0; i < *nbLig; i++) {
        (*matrice)[i] = malloc(*nbCol * sizeof(int));
    }
}

void remplirMatrice(int** matrice, int nbLig, int nbCol) {
    srand(time(NULL));
    for (int i = 0; i < nbLig; i++) {
        for (int j = 0; j < nbCol; j++) {
            matrice[i][j] = rand() % 256;
        }
    }
}

void afficherMatrice(int** matrice, int nbLig, int nbCol) {
    for (int i = 0; i < nbLig; i++) {
        for (int j = 0; j < nbCol; j++) {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
}

void libererMatrice(int*** matrice, int* nbLig, int* nbCol) {
    for (int i = 0; i < *nbLig; i++) {
        free((*matrice)[i]);
    }
    free(*matrice);
    *matrice = NULL;
    *nbLig = 0;
    *nbCol = 0;
}

void exo5() {
    int** matrice = NULL;
    int nbLignes, nbColonnes;
    creerMatrice(&matrice, &nbLignes, &nbColonnes);
    remplirMatrice(matrice, nbLignes, nbColonnes);
    afficherMatrice(matrice, nbLignes, nbColonnes);
    libererMatrice(&matrice, &nbLignes, &nbColonnes);
}
