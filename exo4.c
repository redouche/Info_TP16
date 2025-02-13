#include "exo4.h"
void creerTableau(float** pTab, int const n){
  *pTab = calloc(n, sizeof(float));
}

void saisirNotes(float** tab, int n){
  for (int i = 0; i < n ; i++){
    printf("Note %d =", i +1);
    scanf("%f", &tab[i]);
    }
}

float moyenne(float* tab, int n){
  float sum = 0.0f;
  for (int i = 0; i < n; i++){
    sum += tab[i];
  }
  return sum/(float)n;
}


void exo4(){
  float* notes = NULL;
  int n = 0;

  printf("Combien de notes ?");
  scanf("%d", &n);
  creerTableau(&notes, n);

  saisirNotes(notes, n);

  printf("La moyenne est : %f", moyenne(notes, n));

  free(notes);
  notes = NULL;
}