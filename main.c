#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "exo3.h"
#include "exo4.h"


/* Notes
    calloc (4, sizeof(float)) - initie à 0 les 4 espaces alouéeds
    malloc (4 * sizeof(float)) - initie à une valeur random les 4 espaces alouées
    free(f); - cela ne free pas f, mais l'adresse alouée pointée par f, par exemple 0xde
    int* tab = int tab[]
    TOUJOURS 1 FREE POUR UN CALLOC OU MALLOC
    1) cast : int a = (int)4.5f || Donc comme *pTab est un pointeur de int, on ajoute (int*)
*/

int main() {
    int choix_exo = 0;
    printf("Quel exercice du TD16 souhaitez vous lancer ?\n");
    printf("1 - Exercice 3\n");
    printf("2 - Exercice 4\n");
    printf("Votre choix :");
    scanf("%d", &choix_exo);
    switch (choix_exo) {
        case 1:
            printf("EXERCICE 3:\n");
            exo3();
            break;
        case 2:
            printf("EXERCICE 4:\n");
            exo4();
        default:
            break;
    }
}
