#ifndef EXO8_H
#define EXO8_H

typedef struct{
    int x, y;
} Coord;

void afficher(Coord** tab, int tLog);
void ajouter(Coord*** tab, int* tPhys, int* tLog, int x, int y);
void liberer(Coord*** tab, int* tPhys, int *tLog);
void exo8();

#endif //EXO8_H