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
#include <iostream>
#include <cstdlib>
#include <limits>

//#define MSG_ERROR //todo changer ca

/**
 * @fn saisirInt()
 *
 *
 * @brief Description   : La fonction demande à l'utilisateur d'entré une valeur
 *                        entre la borne min et la borne max défini
 *
 * La fonction de saisie entre dans une boucle qui va demander à l'utilisateur
 * d'entré une valeur entre des bornes définie.
 *
 * La valeur entrée est ensuite contrôlée, si la valeur entrée n'est pas une
 * valeur qui est entre les bornes min et max un message d'erreur s'affiche et le
 * programme redemande à l'utilisateur d'entré une valeur.
 *
 * Une fois que la valeur correct est entrée, ce dernier est retournée où la
 * fonction à été appelée
 *
 *
 * @param MESSAGE : message de demande à l'utilisateur
 * @param MIN : nbr minimum que l'utilisateur peux saisir
 * @param MAX : nbr maximum que l'utilisateur peux saisir
 * @param MSG_ERROR : message afficher lors d'une saisie incorrect
 *
 * @return       : valeur saisie par l'utilisateur
*/
int saisirInt(const std::string MESSAGE, const int MIN, const int MAX ,const
                std::string MSG_ERROR);
#endif