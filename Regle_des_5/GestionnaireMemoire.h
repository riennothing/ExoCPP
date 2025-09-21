#ifndef GESTIONNAIREMEMOIRE_H
#define GESTIONNAIREMEMOIRE_H

#include <iostream>

class GestionnaireMemoire {
private:
    void* blocMemoire;
    size_t taille;
    bool estAlloue;
public:
    // Constructeur avec taille
    GestionnaireMemoire(size_t taille);
    
    // Destructeur
    ~GestionnaireMemoire();
    
    // Constructeur de copie
    GestionnaireMemoire(const GestionnaireMemoire& autre);
    
    // Opérateur d'assignation par copie
    GestionnaireMemoire& operator=(const GestionnaireMemoire& autre);
    
    // Constructeur de déplacement
    GestionnaireMemoire(GestionnaireMemoire&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    GestionnaireMemoire& operator=(GestionnaireMemoire&& autre) noexcept;
    
    // Allouer la mémoire
    bool allouer();
    
    // Libérer la mémoire
    void liberer();
    
    // Écrire dans la mémoire
    void ecrire(const void* data, size_t taille);
    
    // Lire depuis la mémoire
    void lire(void* buffer, size_t taille) const;
    
    // Vérifier si alloué
    bool estAllouee() const;
};

#endif

/*
Travail à faire dans GestionnaireMemoire.cpp :
- Utiliser malloc/free pour la gestion mémoire
- Gérer les états d'allocation
- Faire des copies profondes avec allocation séparée
- Transférer la propriété pour les déplacements
- Tester avec différentes tailles de mémoire
*/
