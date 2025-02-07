#ifndef MAIN_H
#define MAIN_H

void afficherTableau(int* tab, int const taille);
int* allouerTableauEntiersV1(int const taille); // Fonction la plus facile, mais consomme plus
void allouerTableauEntiersV2(int** pTab, int const taille); // Meilleure fonction, mais plus compliquée
void allouerTableauEntiersV3(int** pTab, int* pTaille); // Fonction flexible, mais comporte des risques

#endif //MAIN_H
