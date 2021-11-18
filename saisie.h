/*
-----------------------------------------------------------------------------------------
Nom du fichier : saisie.h
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Prototypes des fonctions de la librairie saisie
Remarque(s)    : ...
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#ifndef SAISIE_H
#define SAISIE_H
#include <string>
#define MSG_ERROR "blabla" //todo changer ca
/** 
* Description   : -
*
* @param param1 : -
* @param param2 : -
* @return       : -
*/
int saisirInt(std::string message, int min, int max, std::string = MSG_ERROR);

#endif