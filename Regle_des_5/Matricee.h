#ifndef MATRICE_H
#define MATRICE_H

#include <iostream>

class Matrice {
private:
    int** donnees;
    size_t lignes;
    size_t colonnes;
public:
    // Constructeur avec dimensions
    Matrice(size_t l, size_t c);
    
    // Destructeur
    ~Matrice();
    
    // Constructeur de copie
    Matrice(const Matrice& autre);
    
    // Opérateur d'assignation par copie
    Matrice& operator=(const Matrice& autre);
    
    // Constructeur de déplacement
    Matrice(Matrice&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    Matrice& operator=(Matrice&& autre) noexcept;
    
    // Affichage de la matrice
    void afficher() const;
};

#endif

/*
Travail à faire dans Matrice.cpp :
- Implémenter l'allocation 2D dynamique
- Faire des copies profondes pour les copies
- Transférer la propriété pour les déplacements
- Bien libérer toute la mémoire dans le destructeur
*/
