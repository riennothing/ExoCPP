#ifndef TAS_H
#define TAS_H

class Tas {
private:
    int* donnees;
    size_t capacite;
    size_t taille;
    
    void monter(size_t index);
    void descendre(size_t index);
public:
    Tas(size_t cap = 10);
    ~Tas();
    void inserer(int valeur);
    int extraireMin();
    int getMin() const;
    bool estVide() const;
    void afficher() const;
};

#endif

/* Travail dans Tas.cpp :
- Implémenter un tas min avec tableau
- Méthodes monter/descendre pour maintenir la propriété de tas
- Insertion en O(log n)
- Extraction du minimum en O(log n)
*/
