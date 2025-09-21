#ifndef GESTIONNAIRETABLEAU_H
#define GESTIONNAIRETABLEAU_H

#include <iostream>

class GestionnaireTableau {
private:
    int* donnees;
    size_t taille;
public:
    GestionnaireTableau(size_t n = 0);
    ~GestionnaireTableau();
    GestionnaireTableau(const GestionnaireTableau& autre);
    GestionnaireTableau& operator=(const GestionnaireTableau& autre);
    GestionnaireTableau(GestionnaireTableau&& autre) noexcept;
    GestionnaireTableau& operator=(GestionnaireTableau&& autre) noexcept;
    void afficher() const;
};

#endif
