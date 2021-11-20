/*
-----------------------------------------------------------------------------------------
Nom du fichier : main
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat /
Date creation  : 18.11.2021
Description    : Ce programme ...
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#include "saisie.h"
#include "annexe_tableau.h"

using namespace std;

int main() {
    /******************************************************************************
     Déclaration des constantes du programme
    ******************************************************************************/

    const string MSG_SAISIE = "Veuillez saisir une valeur ";
    const string MSG_ERREUR = "Veuillez entrez une valeur valide";
    const char VALEURTABLEAUCHAR = 'O';
    const int NBRCOLONNETABLEAU = 10;
    const int MIN = 1;
    const int MAX = 100;


    /******************************************************************************
     Message d'accueil du programme
    ******************************************************************************/
    cout << "Bonjour," << endl << "Ce programme vous donne les nombres "
                                  "premier en fonction d'un nombre maximum "
                                  "que vous saisirez, ceci est effectue en "
                                  "utilisant la methode du crible d'Eratosthene"
                                  << endl;

    /******************************************************************************
     Corps du programme
     ******************************************************************************/

    //saisie utilisateur
    int saisie = saisirInt(MSG_SAISIE, MIN, MAX, MSG_ERREUR);

    //déclaration taille du tableau
    char tab[saisie];

    //initilisation et affichage du tableau de caractère
    initTableauC(tab, saisie, VALEURTABLEAUCHAR);
    afficherTableauC(tab,saisie, NBRCOLONNETABLEAU);

    /******************************************************************************
     Fin du programme
     ******************************************************************************/
	cout << endl << "Appuyer enter pour quitter...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}