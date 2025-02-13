#ifndef EXO4_H
#define EXO4_H

#include <stdlib.h>
#include <stdio.h>

void creerTableau(float**pTab, int const n); // float** tab = float * tab[]
void saisirNotes(float** tab, int n);
float moyenne(float* tab, int n);
void exo4(void);

#endif //EXO4_H
