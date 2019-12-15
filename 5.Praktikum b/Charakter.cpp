/*
Charakterfunktionen
*/

#include "Charakter.h"

string Spieler::setName(string puffer)
{
	Name = puffer;
	return Name;
}

bool Spieler::setGeschlecht(bool ok)
{
	Geschlecht = ok;
	return Geschlecht;
}

int Spieler::setKlasse(int set)
{
	Klasse = set;
	return Klasse;
}

int Spieler::setLevelup(Spieler ds, int set)
{
	Level = set;
	return Level;
}

int Spieler::Levelup(Spieler ds, int add)
{
	Level = Level + add;
	for (int i = 0; i < add; i++)
	{
		ds.addMaxLebenspunkte(5);
		ds.addSt�rke(1), ds.addGeschicklichkeit(1), ds.addIntelligenz(1), ds.addCharisma(1);
		ds.addaktLebenspunkte(ds.addMaxLebenspunkte(0));
	}
	cout << "Du hast nun Level " << Level << " erreicht!\n";
	return Level;
}

int Spieler::setEXP(int set)
{
	Exp = set;
	return Exp;
}

int Spieler::setGold(int set)
{
	Gold = set;
	return Gold;
}

int Spieler::setMaxLebenspunkte(int set)
{
	MaxLebenspunkte = set;
	return MaxLebenspunkte;
}

int Spieler::setaktLebenspunkte(int set)
{
	aktLebenspunkte = set;
	return aktLebenspunkte;
}

int Spieler::setSt�rke(int set)
{
	St�rke = set;
	return St�rke;
}

int Spieler::setGeschicklichkeit(int set)
{
	Geschicklichkeit = set;
	return Geschicklichkeit;
}

int Spieler::setIntelligenz(int set)
{
	Intelligenz = set;
	return Intelligenz;
}

int Spieler::setCharisma(int set)
{
	Charisma = set;
	return Charisma;
}

int Spieler::addEXP(int add)
{
	Exp = Exp + add;
	return Exp;
}

int Spieler::addGold(int add)
{
	Gold = Gold + add;
	return Gold;
}

int Spieler::addMaxLebenspunkte(int add)
{
	MaxLebenspunkte = MaxLebenspunkte + add;
	return MaxLebenspunkte;
}

int Spieler::addaktLebenspunkte(int add)
{
	aktLebenspunkte = aktLebenspunkte + add;
	return aktLebenspunkte;
}

int Spieler::addSt�rke(int add)
{
	St�rke = St�rke + add;
	return St�rke;
}

int Spieler::addGeschicklichkeit(int add)
{
	Geschicklichkeit = Geschicklichkeit + add;
	return Geschicklichkeit;
}

int Spieler::addIntelligenz(int add)
{
	Intelligenz = Intelligenz + add;
	return Intelligenz;
}

int Spieler::addCharisma(int add)
{
	Charisma = Charisma + add;
	return Charisma;
}

Spieler ChrErstellung()
{
	Spieler ds;
	string puffer;
	char eingabe;
	bool ok = true;
	ds.setKlasse(0);
	ds.setLevelup(ds, 0);
	ds.setEXP(0);
	ds.setGold(0);
	ds.setMaxLebenspunkte(0);
	ds.setaktLebenspunkte(0);
	ds.setSt�rke(0);
	ds.setGeschicklichkeit(0);
	ds.setIntelligenz(0);
	ds.setCharisma(0);
	ds.Levelup(ds, 1);
	system("cls");
	
	cout << "Charaktererstellung\nBitte w�hle einen Namen:\n";
	cin >> puffer;
	cout << "Dein Name ist also " << ds.setName(puffer);
	cout << "\nWelches Geschlecht bist du ?\nM�nnlich (0) oder weiblich (1):\n";
	cin >> ok;
	if (ok == true)
	{
		ds.setGeschlecht(ok);
	}
	else
	{
		ok = false;  ds.setGeschlecht(ok); ok = true;
	}	
	cout << "Krieger = 1, Ritter = 2, Kleriker = 3, Magier = 4, Schurke = 5, Waldl�ufer = 6\nBitte w�hle eine Klasse:\n";
	cin >> eingabe;
	switch (eingabe)
	{
	case '1'://Krieger
		ds.setKlasse(1);
		ds.addMaxLebenspunkte(20);
		ds.addSt�rke(4);
		ds.addGeschicklichkeit(3);
		ds.addCharisma(2);
		ds.addaktLebenspunkte(20);
		cout << "Du hast die Klasse Krieger gew�hlt\n";
		break;
	case '2'://Ritter
		ds.setKlasse(2);
		ds.addMaxLebenspunkte(30);
		ds.addSt�rke(3);
		ds.addGeschicklichkeit(3);
		ds.addIntelligenz(2);
		ds.addCharisma(2);
		ds.addaktLebenspunkte(30);
		cout << "Du hast die Klasse Ritter gew�hlt\n";
		break;
	case '3'://Kleriker
		ds.setKlasse(3);
		ds.addMaxLebenspunkte(26);
		ds.addSt�rke(2);
		ds.addIntelligenz(3);
		ds.addCharisma(4);
		ds.addaktLebenspunkte(26);
		cout << "Du hast die Klasse Kleriker gew�hlt\n";
		break;
	case '4'://Magier
		ds.setKlasse(4);
		ds.addMaxLebenspunkte(17);
		ds.addGeschicklichkeit(2);
		ds.addIntelligenz(4);
		ds.addCharisma(3);
		ds.addaktLebenspunkte(17);
		cout << "Du hast die Klasse Magier gew�hlt\n";
		break;
	case '5'://Schurke
		ds.setKlasse(5);
		ds.addMaxLebenspunkte(17);
		ds.addSt�rke(3);
		ds.addGeschicklichkeit(4);
		ds.addCharisma(2);
		ds.addaktLebenspunkte(17);
		cout << "Du hast die Klasse Schurke gew�hlt\n";
		break;
	case '6'://Waldl�ufer
		ds.setKlasse(6);
		ds.addMaxLebenspunkte(22);
		ds.addGeschicklichkeit(3);
		ds.addIntelligenz(2);
		ds.addCharisma(4);
		ds.addaktLebenspunkte(22);
		cout << "Du hast die Klasse Waldl�ufer gew�hlt\n";
		break;
	default: break;
	}
	cout << "Du hast die Klasse Waldl�ufer gew�hlt\n";
	return ds;
}

