#ifndef GESTIONNAIREFICHIER_H
#define GESTIONNAIREFICHIER_H

#include <cstdio>

class GestionnaireFichier {
private:
    FILE* fichier;
public:
    // Constructeur avec ouverture de fichier
    GestionnaireFichier(const char* filename, const char* mode);
    
    // Destructeur avec fermeture de fichier
    ~GestionnaireFichier();
    
    // Suppression des copies (interdites)
    GestionnaireFichier(const GestionnaireFichier&) = delete;
    GestionnaireFichier& operator=(const GestionnaireFichier&) = delete;
    
    // Constructeur de déplacement
    GestionnaireFichier(GestionnaireFichier&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    GestionnaireFichier& operator=(GestionnaireFichier&& autre) noexcept;
    
    // Écrire dans le fichier
    void ecrire(const char* texte);
    
    // Lire depuis le fichier
    void lire(char* buffer, size_t taille);
};

#endif

/*
Travail à faire dans GestionnaireFichier.cpp :
- Ouvrir/fermer les fichiers avec fopen/fclose
- Interdire la copie mais autoriser le déplacement
- Transférer la propriété du FILE* lors des déplacements
- Tester l'écriture et lecture après déplacement
*/
