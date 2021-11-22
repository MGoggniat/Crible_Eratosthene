/*
-----------------------------------------------------------------------------------------
Nom du fichier : criblage_era.h
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Prototypes des fonctions de la librairie criblage_era
Remarque(s)    : ...
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#ifndef CRIBLAGE_ERA_H
#define CRIBLAGE_ERA_H

/** 
* Description     : Crible un tableau de char en fonction de si son nombre associé est
*                   premier ou non. Le nombre associé correspond à son numéro de case
*                   (nombre assicié n+1 pour tab[n])
*                   Si le nombre est premier, le caractère n'est pas modifié, sinon il
*                   vaut "carac" définit en paramètre
* @param tab      : Tableau de char, pour chaque nombre
* @param nbNombre : Taille du tableau "tab" à cribler
* @return         : Nombre de nombre premier
*/
int criblerEra(bool tab[], int nbNombre);

/**
 * Description     : Affiche la liste des nombres premiers du tableau criblé d'eratosthène
 * @param tab      : Tableau de char, représentant si les nombres sinon premier ou non
 * @param nbNombre : Taille du tableau "tab" (représentant le nombre de nombres pésent dans ce tableau)
 * @param carac    : Caractère définissant si un nombre est premier
 * @param enLigne  : Si tous les nombres premiers doivent être affichés sur une seule ligne ou non
 * @param nbCol    : Nombre de colones pour afficher les nombres premiers (utilisé que si enLigne = false)
 * Remarque        : Si enLigne = false et que nbCol <= 0 (-1 par défaut pour indiquer une erreur), le progamme plantera
*/
void listeNbPremier(const bool tab[], int nbNombre, char carac, bool enLigne, int nbCol = -1);
#endif