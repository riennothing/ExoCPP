#ifndef GESTIONNAIREMEMOIRE_H
#define GESTIONNAIREMEMOIRE_H

void* allouerMemoire(size_t taille);
void libererMemoire(void* ptr);

#endif

/* Travail dans GestionnaireMemoire.cpp :
- Utiliser malloc/free
- Gestion manuelle de la mémoire
- Vérifications de base
*/
