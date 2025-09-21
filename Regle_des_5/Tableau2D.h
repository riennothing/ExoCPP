#ifndef TABLEAU2D_H
#define TABLEAU2D_H

#include <iostream>

class Tableau2D {
private:
    int** donnees;
    size_t lignes;
    size_t colonnes;
public:
    // Constructeur avec dimensions
    Tableau2D(size_t l, size_t c);
    
    // Destructeur
    ~Tableau2D();
    
    // Constructeur de copie
    Tableau2D(const Tableau2D& autre);
    
    // Opérateur d'assignation par copie
    Tableau2D& operator=(const Tableau2D& autre);
    
    // Constructeur de déplacement
    Tableau2D(Tableau2D&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    Tableau2D& operator=(Tableau2D&& autre) noexcept;
    
    // Accès aux éléments
    int* operator[](size_t index);
    const int* operator[](size_t index) const;
    
    // Transposition de la matrice
    Tableau2D transposer() const;
    
    // Affichage
    void afficher() const;
    
    // Getter pour les dimensions
    size_t getLignes() const;
    size_t getColonnes() const;
};

#endif

/*
Travail à faire dans Tableau2D.cpp :
- Implémenter une matrice 2D avec allocation dynamique
- Faire des copies profondes complètes
- Transférer la propriété pour les déplacements
- Implémenter la transposition qui retourne une nouvelle matrice
- Tester avec différentes opérations matricielles
*/
