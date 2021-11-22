/*
-----------------------------------------------------------------------------------------
Nom du fichier : criblage_era.h
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Prototypes des fonctions de la librairie criblage_era
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#ifndef CRIBLAGE_ERA_H
#define CRIBLAGE_ERA_H

/** 
* Description     : Crible un tableau de booléen en fonction de si son nombre associé est
*                   premier ou non. Le nombre associé correspond à son numéro du tableau
 *                  -1 (nombre n associé à tab[n-1])
*                   Si le nombre est premier, il n'est pas criblé, sinon il l'est et sa
*                   valeur dans le tableau passe à 1
* @param tab      : Tableau de booléen, pour chaque nombre
* @param nbNombre : Taille du tableau "tab" à cribler
* @return         : Nombre de nombre premier
*/
int criblerEra(bool tab[], int nbNombre);

/**
* Description     : Affiche la liste des nombres du tableau criblé d'eratosthène
* @param tab      : Tableau de booléen, représentant si les nombres sont criblé(1) ou
*                   non (0), s'ils ne sont pas premier, leur nombre associé est premier
* @param nbNombre : Taille du tableau "tab" (représentant le nombre de nombres présent
*                   dans ce tableau)
* @param enLigne  : Si tous les nombres premiers doivent être affichés sur une seule
*                   ligne ou non
* @param nbCol    : Nombre de colones pour afficher les nombres premiers (utilisé que
*                   si enLigne = false)
* Remarque        : Si enLigne = false et que nbCol <= 0 (-1 par défaut pour indiquer
*                   une erreur), le progamme plantera
*/
void listeNbPremier(const bool tab[], int nbNombre, bool enLigne, int nbCol = -1);
#endif