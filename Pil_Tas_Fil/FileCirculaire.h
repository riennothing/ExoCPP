#ifndef FILECIRCULAIRE_H
#define FILECIRCULAIRE_H

class FileCirculaire {
private:
    int* donnees;
    size_t capacite;
    size_t debut;
    size_t fin;
    size_t count;
public:
    FileCirculaire(size_t cap);
    ~FileCirculaire();
    void enfiler(int valeur);
    int defiler();
    bool estVide() const;
    bool estPleine() const;
    void afficher() const;
};

#endif

/* Travail dans FileCirculaire.cpp :
- Implémenter file circulaire avec capacité fixe
- Gestion optimale de la mémoire
- Formules circulaires pour les indices
- Gestion des conditions pleine/vide
*/
