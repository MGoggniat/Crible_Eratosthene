/*
-----------------------------------------------------------------------------------------
Nom du fichier : criblage_era.cpp
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Définitions des fonctions de la librairie criblage_era
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#include "criblage_era.h"
#include "nb_premier.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int cribler(char nombres[], int nbNombre, char carac){
	int nbPremier = 0;
	for (int nombre = 1; nombre <= nbNombre; ++nombre){
		if(!estPremier(nombre)) nombres[nombre-1] = carac;
		else ++nbPremier;
	}
	return nbPremier;
}

/**
* Description   : -
*
* @param param1 : -
* @param param2 : -
* @return       : -
*/
void listeNbPremier(const char nombres[], int nbNombre, char carac, bool enLigne, int nbCol){
	int largeurMax = (int)log10(nbNombre) + 3;
	int col = 0;
	for (int nombre = 1; nombre <= nbNombre; ++nombre){
		if(nombres[nombre - 1] == carac){
			if(!enLigne && col == nbCol){
				cout << endl;
				col = 0;
			}
			cout << setw(largeurMax) << nombre;
			++col;
		}

	}
}