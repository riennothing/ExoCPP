#ifndef PILE_H
#define PILE_H

class Pile {
private:
    int* donnees;
    size_t capacite;
    size_t sommet;
public:
    Pile(size_t cap = 10);
    ~Pile();
    void push(int valeur);
    int pop();
    bool estVide() const;
    bool estPleine() const;
    void afficher() const;
};

#endif

/* Travail dans Pile.cpp :
- Implémenter pile LIFO avec tableau dynamique
- Gérer le redimensionnement automatique si nécessaire
- Vérifier les débordements (stack overflow/underflow)
- Tester avec différentes séquences d'opérations
*/
