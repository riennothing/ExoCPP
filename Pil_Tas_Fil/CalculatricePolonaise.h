#ifndef CALCULATRICEPOLONAISE_H
#define CALCULATRICEPOLONAISE_H

#include "Pile.h"

class CalculatricePolonaise {
private:
    Pile pile;
public:
    CalculatricePolonaise();
    void entrerValeur(int valeur);
    void additionner();
    void soustraire();
    void multiplier();
    void diviser();
    int resultat() const;
    void afficher() const;
};

#endif

/* Travail dans CalculatricePolonaise.cpp :
- Implémenter calculatrice notation polonaise inverse
- Utiliser la pile pour évaluer les expressions
- Gérer les opérations binaires
- Tests avec expressions complexes
*/
