/*
Praktikum 4
09.12.2019
Autor: LB
*/

#include "widerstand.h"

void ausgabe(vector<widerstand> widDaten)
{
	string dim;
	if (widDaten.size() > 0)
	{
		cout << right << setw(20) << "\nWiderstands-Bauform";
		cout << right << setw(10) << "Wid.-Wert";
		cout << right << setw(10) << "Einheit\n\n";

		for (int i = 0; i < widDaten.size(); i++)
		{
			switch (widDaten[i].dim)//zum zuweisen der passenden dim
			{
			case 1: dim = "Mili-Ohm"; break;
			case 2: dim = "Ohm"; break;
			case 3: dim = "Kilo-Ohm"; break;
			case 4: dim = "Mega-Ohm"; break;
			default: break;
			}
			cout << right << setw(20) << widDaten[i].widBauForm;
			cout << right << setw(10) << setprecision(4) << widDaten[i].widWert;
			cout << right << setw(10) << dim;
			cout << "\n";
		}
	}
	else
		cout << "\nKeine Datens�tze vorhanden!\n";
}


bool inDateiSchreiben(vector<widerstand> widDaten)
{
	bool ok = true;
	ofstream ziel;
	if (widDaten.size() == 0) ok = false;
	else
	{
		unsigned int aktAnz = widDaten.size();
		ziel.open("Daten.dat", ios::out);//quelle �ffnen
		if (!ziel.is_open()) ok = false;//quelle offen ?
		else
		{
			for (unsigned int i = 0; i < widDaten.size(); i++)// speichern mit bestimmten L�ngen f�s auslesen
			{
				ziel.width(L�nge1); ziel << right << widDaten[i].widBauForm;
				ziel.width(L�nge2); ziel << right << widDaten[i].widWert;
				ziel.width(L�nge3); ziel << right << widDaten[i].dim;
				if (i != aktAnz - 1) ziel << endl;//Wenn letzer Datensatz, kein Absatz
			}
			ziel.close();//quelle schlie�en
		}
	}
	return ok;
}

bool ausDateiLesen(vector<widerstand>& widDaten)
{
	ifstream quelle;
	string puffer;
	widerstand ds;

	quelle.open("Daten.dat", ios::in);//quelle �ffnen
	if (!quelle.is_open()) return false;
	else
	{
		while (!quelle.eof())//tempor�res auslesen in das Array mit pushback
		{			
			quelle.width(L�nge1); quelle >> ds.widBauForm;
			if (ds.widBauForm == "") break; //Abfrage nach einer Leerstelle
			quelle.width(L�nge2); quelle >> ds.widWert;
			quelle.width(L�nge3); quelle >> ds.dim;
			widDaten.push_back(ds);
		}
		quelle.close();//quelle schlie�en
	}
	return true;
}
