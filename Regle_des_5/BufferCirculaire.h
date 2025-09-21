#ifndef BUFFERCIRCULAIRE_H
#define BUFFERCIRCULAIRE_H

#include <iostream>

class BufferCirculaire {
private:
    int* donnees;
    size_t capacite;
    size_t debut;
    size_t fin;
    size_t count;
public:
    // Constructeur avec capacité
    BufferCirculaire(size_t cap);
    
    // Destructeur
    ~BufferCirculaire();
    
    // Constructeur de copie
    BufferCirculaire(const BufferCirculaire& autre);
    
    // Opérateur d'assignation par copie
    BufferCirculaire& operator=(const BufferCirculaire& autre);
    
    // Constructeur de déplacement
    BufferCirculaire(BufferCirculaire&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    BufferCirculaire& operator=(BufferCirculaire&& autre) noexcept;
    
    // Ajouter un élément
    void ajouter(int valeur);
    
    // Retirer un élément
    int retirer();
    
    // Vérifier si vide
    bool estVide() const;
    
    // Vérifier si plein
    bool estPlein() const;
};

#endif

/*
Travail à faire dans BufferCirculaire.cpp :
- Implémenter un buffer circulaire fonctionnel
- Gérer les indices debut/fin/count correctement
- Faire des copies profondes qui préservent l'état
- Transférer la propriété pour les déplacements
*/
