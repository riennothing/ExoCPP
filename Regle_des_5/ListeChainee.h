#ifndef LISTECHAINEE_H
#define LISTECHAINEE_H

struct Noeud {
    int valeur;
    Noeud* suivant;
    
    // Constructeur pour Noeud
    Noeud(int val) : valeur(val), suivant(nullptr) {}
};

class ListeChainee {
private:
    Noeud* tete;
    
    // Méthode utilitaire pour copie profonde
    Noeud* copierListe(Noeud* autre) const;
    
    // Méthode utilitaire pour suppression
    void supprimerListe(Noeud* n);
public:
    // Constructeur par défaut
    ListeChainee();
    
    // Destructeur
    ~ListeChainee();
    
    // Constructeur de copie
    ListeChainee(const ListeChainee& autre);
    
    // Opérateur d'assignation par copie
    ListeChainee& operator=(const ListeChainee& autre);
    
    // Constructeur de déplacement
    ListeChainee(ListeChainee&& autre) noexcept;
    
    // Opérateur d'assignation par déplacement
    ListeChainee& operator=(ListeChainee&& autre) noexcept;
    
    // Ajouter en tête
    void ajouter(int valeur);
    
    // Afficher la liste
    void afficher() const;
};

#endif

/*
Travail à faire dans ListeChainee.cpp :
- Implémenter une liste chaînée simple
- Faire des copies profondes de toute la liste
- Transférer la propriété pour les déplacements
- Bien libérer toute la mémoire
- Utiliser des méthodes helpers pour copier/supprimer
*/
