#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <windows.h>
// LA CONSTANTE DU PROGRAMME

const size_t REPONDANTS_MAX = 500; // nombre maximun de répondants du sondage


// LES STRUCTURES DE DONNÉES IMPOSÉES

struct Abonnement
{
	int  r2[REPONDANTS_MAX];
	char r3[REPONDANTS_MAX];
	char r4[REPONDANTS_MAX];
	char r5[REPONDANTS_MAX];
	char r6[REPONDANTS_MAX];
};

struct Production
{
	bool r7;
	int	r8, r9, r10;
};

struct Repondant
{
	std::string ville;
	int age;
	int scolarite;
};
// DÉCALRATIONS DES FONCTIONS  -- écrire vos déclarations ici ...

size_t lireLesDonnéesDuSondage(bool r1[], Abonnement* abo, Production prod[], Repondant rep[]);

void Stat_1(const bool r[], size_t taille);
void Stat_2(const Abonnement* abo, size_t taille);
void Stat_3(const Abonnement* abo, const Production* p, size_t taille);
void Stat_4(const Production* p, size_t t);
void Stat_5(const Repondant* r, const Production* p, size_t t);