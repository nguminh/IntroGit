#include <conio.h>
#include "cvm23.h"
#include "statanalyse.h"
using namespace std;


// L'UNIQUE VARIABLE GLOBALE

static size_t nb_repondants;	// le nombre réel de répondants: nb_repondants = lireLesDonnéesDuSondage(...)

int main()
{
	setcp(1252);

	// Pour recevoir les données du sondage
	bool* r1 = new bool[REPONDANTS_MAX] {};					// pour la  réponse  1
	Abonnement* abo = new Abonnement{};						// pour les réponses 2-3-4-5-6
	Production* prod = new Production[REPONDANTS_MAX]{};	// pour les réponses 7-8-9-10
	Repondant* rep = new Repondant[REPONDANTS_MAX]{};		// pour les réponses ville, age, scolarité

	// A - charger les données du sondage
	nb_repondants = lireLesDonnéesDuSondage(r1, abo, prod, rep);


	//B - appeler vos fonctions statistiques et afficher ici leurs résultats
	//	Stat_1(r1, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_2(abo, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_3(abo, prod, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_4(prod, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_5(rep, prod, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_6(prod, rep, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_7(prod, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_8(abo, prod, rep, nb_repondants);
	gotoxy(0, wherey() + 1);
	Stat_9(prod, rep, nb_repondants);
	Stat_10(abo, rep, nb_repondants);
	_getch();
	// C - Recycler les allocations dynamiques
	delete[] r1;
	delete abo;
	delete[] prod;
	delete[] rep;
}