#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
private:
    static Singleton* instance;
    
    // Constructeur privé
    Singleton();
    
    // Donnée membre pour l'exemple
    int valeur;
public:
    // Destructeur
    ~Singleton();
    
    // Suppression de toutes les opérations de copie/déplacement
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;
    
    // Méthode d'accès à l'instance unique
    static Singleton* getInstance();
    
    // Méthodes d'exemple
    void setValeur(int v);
    int getValeur() const;
};

#endif

/*
Travail à faire dans Singleton.cpp :
- Implémenter le pattern Singleton
- Initialiser le pointeur instance à nullptr
- Créer l'instance au premier appel de getInstance()
- Supprimer toutes les opérations de copie/déplacement
- Tester l'unicité de l'instance
*/
