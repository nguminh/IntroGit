#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <windows.h>
// LA CONSTANTE DU PROGRAMME

const size_t REPONDANTS_MAX = 500; // nombre maximun de r�pondants du sondage


// LES STRUCTURES DE DONN�ES IMPOS�ES

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
// D�CALRATIONS DES FONCTIONS  -- �crire vos d�clarations ici ...

size_t lireLesDonn�esDuSondage(bool r1[], Abonnement* abo, Production prod[], Repondant rep[]);

void Stat_1(const bool r[], size_t taille);
void Stat_2(const Abonnement* abo, size_t taille);
void Stat_3(const Abonnement* abo, const Production* p, size_t taille);
void Stat_4(const Production* p, size_t t);
void Stat_5(const Repondant* r, const Production* p, size_t t);