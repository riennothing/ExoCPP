#ifndef TABLEAU2DDYNAMIQUE_H
#define TABLEAU2DDYNAMIQUE_H

int** creerTableau2D(size_t lignes, size_t colonnes);
void detruireTableau2D(int** tableau, size_t lignes);

#endif

/* Travail dans Tableau2DDynamique.cpp :
- Allocation double : tableau de pointeurs + chaque ligne
- Initialisation à 0
- Libération de toute la mémoire
*/
