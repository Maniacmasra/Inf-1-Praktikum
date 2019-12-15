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
	int setStärke(int set);
	int setGeschicklichkeit(int set);
	int setIntelligenz(int set);
	int setCharisma(int set);

	int addEXP(int add);
	int addGold(int add);
	int addMaxLebenspunkte(int add);
	int addaktLebenspunkte(int add);
	int addStärke(int add);
	int addGeschicklichkeit(int add);
	int addIntelligenz(int add);
	int addCharisma(int add);

private:

	string Name;
	bool Geschlecht;//0=Männlich,1=weiblich
	int Klasse;
	int Level;
	int Exp;
	int Gold;
	int MaxLebenspunkte;
	int aktLebenspunkte;
	int Stärke;
	int Geschicklichkeit;
	int Intelligenz;
	int Charisma;
};

Spieler ChrErstellung();
