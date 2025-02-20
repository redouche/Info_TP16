#include "exo8.h"
#include <stdio.h>
#include <stdlib.h>


void afficher(Coord** tab, int tLog) {
    if(tab != NULL) {
        for (int i = 0; i < tLog; i++) {
            printf("Coordonnee numero %d : %d,%d\n", i+1, tab[i]->x, (*tab[i]).y);
        }
    }
}
void ajouter(Coord*** tab, int* tPhys, int* tLog, int x, int y) {
    if(*tab == NULL) { // si le pointeur coords du main est NULL
        printf("Creation du tableau avec malloc\n");
        *tPhys = 3;
        *tLog = 0;
        *tab = malloc(*tPhys * sizeof(Coord*));
    }
    else if(*tLog == *tPhys) {
        printf("Realloc\n");
        *tPhys += 3;
        *tab = realloc(*tab, *tPhys * sizeof(Coord*));
    }
    printf("Ajout de %d,%x\n", x, y);
    (*tab)[*tLog] = malloc(1 * sizeof(Coord));
    (*tab)[*tLog]->x = x;
    (*(*tab)[*tLog]).y = y;
    (*tLog)++;
}
void liberer(Coord***  tab, int* tPhys, int *tLog) {
    if (*tab != NULL) {
        for (int i = 0; i < *tLog; i++) {
            free((*tab)[i]);
            (*tab)[i] = NULL;
        }
        free(*tab);
        *tab = NULL; // C'est pour ça qu'il y a 3 * à tab
        *tLog = *tPhys = 0;
    }
}

void exo8() {
    Coord** coords = NULL;
    int nbCoords, nbCoordsMax;
    Coord* coordActuelle = NULL;
    ajouter(&coords, &nbCoordsMax, &nbCoords, 3, 5); // alloue un tab de 3 cases
    ajouter(&coords, &nbCoordsMax, &nbCoords, 12, 9);
    coordActuelle = coords[1];
    ajouter(&coords, &nbCoordsMax, &nbCoords, 6, 35);
    ajouter(&coords, &nbCoordsMax, &nbCoords, 26, 37); // réalloue le tab +3 cases
    afficher(coords, nbCoords);
    printf("Ici, %p doit etre egal a : %p\n", coordActuelle, coords[1]);
    liberer(&coords, &nbCoordsMax, &nbCoords);
}