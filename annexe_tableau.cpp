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

#include "annexe_tableau.h"
using namespace std;

void afficherTabBol(const bool tab[], int taille, char non, char oui, int nbCol){

    int colonne_actuel = 0;

    //boucle qui affiche le tableau sur plusieurs ligne en fonction du nbr de
    // colonne souhaité
    for(int position = 0; position < taille; ++position){

        cout << (tab[position] ? oui : non) << " ";
        ++colonne_actuel;

        if(colonne_actuel == nbCol){
            cout << endl;
            colonne_actuel = 0;
        }
    }

}

