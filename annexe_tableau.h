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

/**
 * Description    : Affiche un tableau de caractère en fonction des valeurs binaire du
 *                  tableau "tab" en entrée, (char oui si true, sinon char non)
 * @param tab     : tableau de booléen
 * @param taille  : défini la taille du tableau
 * @param non     : caractère à afficher si false
 * @param oui     : caractère à afficher si true
 * @param nbCol   : défini combien de caractère sont affiché sur une ligne
*/
void afficherTabBol(const bool tab[], int taille, char non, char oui, int nbCol);
#endif