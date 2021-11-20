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
#include "saisie.h"

using namespace std;

int saisirInt(const string MESSAGE, const int MIN, const int MAX ,const string
                MSG_ERROR){

    bool erreur;
    int saisie;

    do{
        //Entrée utilisateur
        cout << MESSAGE << "[" << MIN << "-" << MAX << "]" << " :";
        cin >> saisie;

        // Vérifie qu'un caractère correct à été entré par l'utilisateur
        erreur = cin.fail() || !(saisie >= MIN && saisie < MAX);

        //si un mauvais caractère à été saisi un message d'erreur est affiché
        if (erreur) {
            cout << MSG_ERROR << endl;
            cin.clear();
        }

        //vider buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');


    }while(erreur);

    return saisie;

}


