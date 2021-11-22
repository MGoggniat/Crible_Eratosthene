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
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int criblerEra(bool nombres[], int nbNombre){

	int nbPremier = nbNombre;//décrémenter pour chaque nombre non-premier

	//1 n'est pas premier
	nombres[0] = true;
	--nbPremier;

	//il faut retirer tous les multiple des nombre compris entre 2 et racine carré du
	// plus grand nombre
	for(int nombre = 2; nombre <= sqrt(nbNombre); ++nombre){
		for(int nombreAVerifier = nombre + 1; nombreAVerifier <= nbNombre; ++nombreAVerifier){
			if(!nombres[nombreAVerifier - 1] && !(nombreAVerifier % nombre)){
				nombres[nombreAVerifier - 1] = true;
				--nbPremier;
			}
		}
	}
	return nbPremier;
}

void listeNbPremier(const bool tab[], int nbNombre, char carac, bool enLigne, int nbCol){

	//largeur pour afficher les nombres
	int const marge = 2;
	int largeurMax = (int)log10(nbNombre) + 1 + marge;

	int col = 0;//définit dans quel colone est affiché le dernier nombre

	for (int nombre = 1; nombre <= nbNombre; ++nombre){
		//si le nombre n'est pas cribler, l'afficher
		if(!tab[nombre - 1]){
			//retour à la ligne si besoin
			if(!enLigne && col == nbCol){
				cout << endl;
				col = 0;
			}
			//affichage du nombre premier
			cout << setw(largeurMax) << nombre;
			++col;
		}
	}
}