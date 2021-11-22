/*
-----------------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom de labo    : Crible_Eratosthene
Auteur(s)      : Michael Gogniat /
Date creation  : 18.11.2021
Description    : Ce programme ...
Compilateur    : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------------
*/

#include "saisie.h"
#include "annexe_tableau.h"
#include "criblage_era.h"

using namespace std;

int main() {
    /******************************************************************************
     Déclaration des constantes du programme
    ******************************************************************************/

    const string MSG_SAISIE = "Veuillez saisir une valeur ";
    const string MSG_ERREUR = "Veuillez entrez une valeur valide";
    const int NB_COL_TABLEAU = 10;
	const int NB_COL_LISTE = 10;
    const int NOMBRE_MIN = 1;
    const int NOMBRE_MAX = 100;
	const char premier = 'O';
	const char nonPremier = 'X';


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
	cout << endl;
	cout << "Il y a " << nbPremier << " nbres premier" << endl;
	listeNbPremier(tab,nbNombre,VALEURTABLEAUCHAR, false, NB_COL_LISTE);

    /******************************************************************************
     Fin du programme
     ******************************************************************************/
	cout << endl << "Appuyer enter pour quitter...";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}