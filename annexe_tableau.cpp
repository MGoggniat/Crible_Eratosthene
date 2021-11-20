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


void initTableauC(char tableau[], int taille, char valeur){

    //boucle qui assigne un et un seul caractère à tout le tableau
    for (int position = 0; position < taille; ++position){
        tableau[position] = valeur;
    }

}

void afficherTableauC(char tableau[], int taille, int nbCol){

    int colonne_actuel = 0;

    //boucle qui affiche le tableau sur plusieurs ligne en fonction du nbr de
    // colonne souhaité
    for(int position = 0; position < taille; ++position){

        std::cout << tableau[position] << " ";
        ++colonne_actuel;

        if(colonne_actuel == nbCol){
            std::cout << std::endl;
            colonne_actuel = 0;
        }
    }

}

