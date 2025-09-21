#ifndef FILEPRIORITE_H
#define FILEPRIORITE_H

#include "Tas.h"

class FilePriorite {
private:
    Tas tas;
public:
    FilePriorite(size_t cap = 10);
    void enfiler(int valeur);
    int defiler();
    bool estVide() const;
    void afficher() const;
};

#endif

/* Travail dans FilePriorite.cpp :
- Utiliser le Tas comme structure de base
- Enfiler = inserer dans le tas
- Défiler = extraire le minimum
- Implémenter une file de priorité efficace
*/
