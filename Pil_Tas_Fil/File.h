#ifndef FILE_H
#define FILE_H

class File {
private:
    int* donnees;
    size_t capacite;
    size_t debut;
    size_t fin;
    size_t count;
public:
    File(size_t cap = 10);
    ~File();
    void enfiler(int valeur);
    int defiler();
    bool estVide() const;
    bool estPleine() const;
    void afficher() const;
};

#endif

/* Travail dans File.cpp :
- Implémenter file FIFO avec tableau dynamique
- Utiliser une file circulaire pour optimiser l'espace
- Gérer les indices debut/fin/count
- Redimensionner si nécessaire
*/
