#ifndef PILEMIN_H
#define PILEMIN_H

class PileMin {
private:
    struct Element {
        int valeur;
        int min;
    };
    
    Element* donnees;
    size_t capacite;
    size_t sommet;
public:
    PileMin(size_t cap = 10);
    ~PileMin();
    void push(int valeur);
    int pop();
    int getMin() const;
    bool estVide() const;
    void afficher() const;
};

#endif

/* Travail dans PileMin.cpp :
- Implémenter pile qui donne le minimum en O(1)
- Stocker pour chaque élément le min courant
- Complexité constante pour toutes les opérations
- Gestion mémoire efficace
*/
