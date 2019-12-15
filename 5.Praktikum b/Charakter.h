#pragma once
/*
Charktererstellung
*/

#include <windows.h>
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "support.h"

using namespace std;

class Spieler 
{
public:
	//Wertefunktionen
	string setName(string puffer);
	bool setGeschlecht(bool ok);
	int setKlasse(int set);
	int setLevelup(Spieler ds, int set);
	int Levelup(Spieler ds, int add);
	int setEXP(int set);
	int setGold(int set);
	int setMaxLebenspunkte(int set);
	int setaktLebenspunkte(int set);
	int setSt�rke(int set);
	int setGeschicklichkeit(int set);
	int setIntelligenz(int set);
	int setCharisma(int set);

	int addEXP(int add);
	int addGold(int add);
	int addMaxLebenspunkte(int add);
	int addaktLebenspunkte(int add);
	int addSt�rke(int add);
	int addGeschicklichkeit(int add);
	int addIntelligenz(int add);
	int addCharisma(int add);

private:

	string Name;
	bool Geschlecht;//0=M�nnlich,1=weiblich
	int Klasse;
	int Level;
	int Exp;
	int Gold;
	int MaxLebenspunkte;
	int aktLebenspunkte;
	int St�rke;
	int Geschicklichkeit;
	int Intelligenz;
	int Charisma;
};

Spieler ChrErstellung();
