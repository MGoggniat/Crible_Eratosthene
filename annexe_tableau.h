/*
-----------------------------------------------------------------------------------------
Nom du fichier : annexe_tableau.h
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Prototypes des fonctions de la librairie annexe_tableau
Remarque(s)    : ...
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#ifndef ANNEXE_TABLEAU_H
#define ANNEXE_TABLEAU_H
#include <iostream>

/**
 * @fn afficherTableauC()
 *
 *
 * @brief Description   : La fonction affiche ce que contient le tableau
 *
 * le tableau est affiché sur un nombre de colonne donnée par le programmeur et
 * peux afficher  caractère comme plusieurs.
 *
 * @param tableau : reçoit le tableau que l'on veut initialiser
 * @param taille : défini la taille du tableau
 * @param nbCol : défini combien de caractère sont affiché sur une ligne
 *
 * @return       : -
*/
void afficherTabBol(const bool tab[], int taille, char non, char oui, int nbCol);
#endif