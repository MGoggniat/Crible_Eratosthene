/*
-----------------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat / Patrick Maillard
Date creation  : 18.11.2021
Description    : Ce programme effectue un criblade d'eratosthène sur un nombre n'entier
                 choisis par l'utilisateur.
                 Il affiche un tableau avant et après criblage, ainsi que le nombre et la
                 liste des nombres premier.
                 Pour ce laboratoire, les nombre criblé(non-premier) sont représenté par
                 un 'X' et les nombres premier par un 'O'.
                 Pour plus de détails sur la méthode du crible d'eratosthène :
                 https://www.youtube.com/watch?v=_RJP7JvWrzk
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/
#include <string>
#include <iostream>
#include <cstdlib>

#include "saisie.h"
#include "annexe_tableau.h"
#include "criblage_era.h"

using namespace std;

int main() {
    //Constantes
	const string MSG_SAISIE = "Veuillez saisir une valeur";
    const string MSG_ERREUR = "Saisie incorrecte";
    const int NB_COL_TABLEAU = 10;
	const int NB_COL_LISTE = 10;
    const int NOMBRE_MIN = 2;
    const int NOMBRE_MAX = 100;
	const char premier = 'O';
	const char nonPremier = 'X';

    /******************************************************************************
     Message d'accueil du programme
    ******************************************************************************/

    cout << "Bonjour," << endl << "Ce programme vous donne les nombres "
                                  "premier en fonction d'un nombre maximum "
								  "que vous saisirez," << endl
								  << "ceci est effectue en "
                                  "utilisant la methode du crible d'Eratosthene"
                                  << endl << endl;

    /******************************************************************************
     Corps du programme
     ******************************************************************************/

    //saisie utilisateur
    int nbNombre = saisirInt(MSG_SAISIE, NOMBRE_MIN, NOMBRE_MAX, MSG_ERREUR);

    //initilisation et affichage du tableau de caractère
	bool tab[NOMBRE_MAX] = {};
	cout << endl << "initialistion du tableau" << endl;
    afficherTabBol(tab, nbNombre, premier, nonPremier, NB_COL_TABLEAU);

	//criblage
	int nbPremier = criblerEra(tab,nbNombre);

	//résultat du criblage
	cout << endl << endl << "criblage du tableau" << endl;
	afficherTabBol(tab, nbNombre, premier, nonPremier, NB_COL_TABLEAU);
	cout << endl << endl;
	cout << "Il y a " << nbPremier << " nbres premier" << endl;
	listeNbPremier(tab,nbNombre, false, NB_COL_LISTE);

    /******************************************************************************
     Fin du programme
     ******************************************************************************/
	cout << endl << "Appuyer enter pour quitter...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}