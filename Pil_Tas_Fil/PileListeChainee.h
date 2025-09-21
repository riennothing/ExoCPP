#ifndef PILELISTECHAINEE_H
#define PILELISTECHAINEE_H

struct NoeudPile {
    int valeur;
    NoeudPile* suivant;
    NoeudPile(int val) : valeur(val), suivant(nullptr) {}
};

class PileListeChainee {
private:
    NoeudPile* sommet;
public:
    PileListeChainee();
    ~PileListeChainee();
    void push(int valeur);
    int pop();
    bool estVide() const;
    void afficher() const;
};

#endif

/* Travail dans PileListeChainee.cpp :
- Implémenter pile avec liste chaînée
- Pas de limite de capacité (sauf mémoire)
- Push/pop en O(1)
- Bien gérer la mémoire (pas de fuites)
*/
