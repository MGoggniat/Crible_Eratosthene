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
* Description   : -
*
* @param param1 : -
* @param param2 : -
* @return       : -
*/
int cribler(char nombres[], int nbNombre, char carac);

/**
* Description   : -
*
* @param param1 : -
* @param param2 : -
* @return       : -
*/
void listeNbPremier(const char nombres[], int nbNombre, char carac, bool enLigne, int nbCol = -1);
#endif