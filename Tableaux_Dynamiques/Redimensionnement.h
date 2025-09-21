#ifndef REDIMENSIONNEMENT_H
#define REDIMENSIONNEMENT_H

void redimensionnerTableau(int*& tableau, size_t ancienneTaille, size_t nouvelleTaille);

#endif

/* Travail dans Redimensionnement.cpp :
- Allouer un nouveau tableau de nouvelle taille
- Copier les anciennes valeurs si possible
- Désallouer l'ancien tableau
- Mettre à jour la référence
*/
