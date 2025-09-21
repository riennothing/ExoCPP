#ifndef VECTORPERSONNALISE_H
#define VECTORPERSONNALISE_H

#include <iostream>

class VectorPersonnalise {
private:
    int* donnees;
    size_t taille;
    size_t capacite;
    
    // Redimensionnement automatique
    void redimensionner(size_t nouvelleCapacite);
public:
    // Constructeur par défaut
    VectorPersonnalise();
    
    // Destructeur
    ~VectorPersonnalise();
    
    // Constructeur de copie
    VectorPersonnalise(const VectorPersonnalise& autre);
    
    // Opérateur d'assignation par copie
    VectorPersonnalise& operator=(const VectorPersonnalise& autre);
    
    // Constructeur de déplacement
    VectorPersonnalise(VectorPersonnalise&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    VectorPersonnalise& operator=(VectorPersonnalise&& autre) noexcept;
    
    // Ajouter un élément
    void push_back(int valeur);
    
    // Accès aux éléments
    int& operator[](size_t index);
    const int& operator[](size_t index) const;
    
    // Taille actuelle
    size_t size() const;
    
    // Capacité actuelle
    size_t capacity() const;
    
    // Affichage
    void afficher() const;
};

#endif

/*
Travail à faire dans VectorPersonnalise.cpp :
- Implémenter un vector similaire à std::vector
- Gérer la croissance automatique (capacité * 2)
- Faire des copies profondes
- Transférer la propriété pour les déplacements
- Tester les performances avec grandes tailles
*/
