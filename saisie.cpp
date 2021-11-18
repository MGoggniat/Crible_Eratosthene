/*
-----------------------------------------------------------------------------------------
Nom du fichier : saisie.cpp
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Définitions des fonctions de la librairie saisie
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/
#include <iostream>
#include "saisie.h"


int saisirInt(std::string message, int min, int max /*,std::string MSG_ERROR*/){

    int saisie;

    std::cout << message << "[" << min << "-" << max << "]";
    std::cin >> saisie;

    return saisie;

}


