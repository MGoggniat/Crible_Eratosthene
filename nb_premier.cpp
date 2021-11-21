/*
-----------------------------------------------------------------------------------------
Nom du fichier : nb_premier.cpp
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Définitions des fonctions de la librairie nb_premier
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#include "nb_premier.h"
#include <cmath>
using namespace std;

bool estPremier(int nombre){
	for(int i = 2; i <= sqrt(nombre); ++i){
		if(!(nombre % i)){
			return false;
		}
	}
	return (bool)--nombre;
}
