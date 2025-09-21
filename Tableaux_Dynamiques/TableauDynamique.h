#ifndef TABLEAUDYNAMIQUE_H
#define TABLEAUDYNAMIQUE_H

#include <iostream>

class TableauDynamique {
private:
    int* donnees;
    size_t taille;
public:
    TableauDynamique(size_t n);
    ~TableauDynamique();
    void remplir();
    void afficher() const;
};

#endif

/* Travail dans TableauDynamique.cpp :
- Allocation dynamique avec new[]
- Remplissage avec valeurs utilisateur
- Affichage du tableau
- Désallocation avec delete[]
*/
