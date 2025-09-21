#ifndef TABLEAUSTRUCTURES_H
#define TABLEAUSTRUCTURES_H

struct Personne {
    char nom[50];
    int age;
};

Personne* creerTableauPersonnes(size_t taille);
void afficherPersonnes(const Personne* personnes, size_t taille);

#endif

/* Travail dans TableauStructures.cpp :
- Allocation tableau de structures
- Remplissage avec données
- Affichage formaté
*/
