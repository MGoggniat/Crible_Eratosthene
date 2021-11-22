/*
-----------------------------------------------------------------------------------------
Nom du fichier : annexe_tableau.cpp
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Définitions des fonctions de la librairie annexe_tableau
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/
#include <iostream>
#include "annexe_tableau.h"
#include <cassert>
using namespace std;

void afficherTabBol(const bool tab[], int taille, char non, char oui, int nbCol){
	assert(taille > 0 && nbCol > 0);
	int col = 0;//définit dans quel colone est affiché le dernier nombre

    //boucle qui affiche le tableau sur plusieurs ligne en fonction du nbr de
    // colonne souhaité
    for(int position = 0; position < taille; ++position){

        cout << (tab[position] ? oui : non) << " ";
        ++col;

		//retour à la ligne si besoin
        if(col == nbCol){
            cout << endl;
            col = 0;
        }
    }

}

