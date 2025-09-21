#ifndef GESTIONNAIRERESSOURCE_H
#define GESTIONNAIRERESSOURCE_H

class GestionnaireRessource {
private:
    int* ressource;
    bool estAlloue;
public:
    // Constructeur
    GestionnaireRessource();
    
    // Destructeur
    ~GestionnaireRessource();
    
    // Constructeur de copie
    GestionnaireRessource(const GestionnaireRessource& autre);
    
    // Opérateur d'assignation par copie
    GestionnaireRessource& operator=(const GestionnaireRessource& autre);
    
    // Constructeur de déplacement
    GestionnaireRessource(GestionnaireRessource&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    GestionnaireRessource& operator=(GestionnaireRessource&& autre) noexcept;
    
    // Allouer la ressource
    void allouer();
    
    // Libérer la ressource
    void liberer();
    
    // Utiliser la ressource
    void utiliser();
    
    // Vérifier si allouée
    bool estAllouee() const;
};

#endif

/*
Travail à faire dans GestionnaireRessource.cpp :
- Simuler une ressource système (mémoire, fichier, réseau)
- Gérer l'état d'allocation avec un booléen
- Empêcher l'utilisation si non allouée
- Faire des copies profondes qui allouent leur propre ressource
- Transférer la propriété pour les déplacements
*/
