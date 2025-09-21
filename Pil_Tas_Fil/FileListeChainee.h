#ifndef FILELISTECHAINEE_H
#define FILELISTECHAINEE_H

struct NoeudFile {
    int valeur;
    NoeudFile* suivant;
    NoeudFile(int val) : valeur(val), suivant(nullptr) {}
};

class FileListeChainee {
private:
    NoeudFile* debut;
    NoeudFile* fin;
public:
    FileListeChainee();
    ~FileListeChainee();
    void enfiler(int valeur);
    int defiler();
    bool estVide() const;
    void afficher() const;
};

#endif

/* Travail dans FileListeChainee.cpp :
- Implémenter file avec liste chaînée
- Maintenir deux pointeurs (début et fin)
- Enfilage/défilage en O(1)
- Gestion mémoire rigoureuse
*/
