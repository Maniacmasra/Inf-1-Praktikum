/*
Hilfsfunktionen
*/

#include "support.h"

Spieler ds;

bool ConvertToInt(char eingabeconvert[10], int& add)
{
	string sPuffer = eingabeconvert;
	for (unsigned int i = 0; i < sPuffer.size(); i++)
	{
		if (!isdigit(sPuffer[i])) return false;
	}
	add = atoi(eingabeconvert);
	return true;
}

void timer(int stunde, int min, int sek)
{
	for (;;)
	{
		if (stunde == 0 && min == 0 && sek == 0)
		{
			break;
		}
		if (sek == 0 && min == 0)
		{
			min = 60;
			stunde--;
		}
		if (sek == 0)
		{
			sek = 60;
			min--;
		}
		system("cls");
		Sleep(1000);
	}
}

int menü(Spieler ds, int& ort)
{
	char eingabe, eingabeconvert[10];
	string puffer;
	cout << "\n *** Menü ***\n";
	cout << "\n --> Inventar [i/I]:";
	cout << "\n --> Spiel laden [l/L]";
	cout << "\n --> Spiel speichern [s/S]";
	cout << "\n --> Programm beenden [b/B]";
	cout << "\n : ";
	cin >> eingabe;

	switch (tolower(eingabe))
	{
		case 'a'://Inventarfuntkion
		{

		}
		case 'l'://Laden
		{

		}
		case 's'://Speichern
		{

		}
		case 'b'://Spiel beenden
		{
			cout << "\n\tProgramm beenden? [j/n].";
			cin >> eingabe;
			if (eingabe == 'j')
			{
				exit(0);
			}
			break;
		}
		case 'c'://cheats
		{
			int add = 0;
			bool ok = true;
			cin >> puffer;
			if (puffer == "Name")
			{
				cin >> puffer;
				cout << "Dein neuer Name ist " << ds.setName(puffer) << endl;
			}
			else if (puffer == "Klasse")
			{
					
			}
			else if (puffer == "Level")
			{
				do
				{
					cin >> eingabeconvert;
					ok = ConvertToInt(eingabeconvert, add);
				} while (!ok);
				ds.setLevelup;
				cout << "Dein neues Level ist " << ds.setLevelup << endl;
				break;
			}
			else if (puffer == "Gold")
			{
				do
				{
					cin >> eingabeconvert;
					ok = ConvertToInt(eingabeconvert, add);
				} while (!ok);
				cout << "Dein Gold Wert ist " << ds.addGold(add) << endl;
				break;
			}
			else if (puffer == "Stärke")
			{
				do
				{
					cin >> eingabeconvert;
					ok = ConvertToInt(eingabeconvert, add);
				} while (!ok);
				cout << "Deine neue Stärke ist " << ds.addStärke(add) << endl;
				break;
			}
			else if (puffer == "Geschicklichkeit")
			{
				do
				{
					cin >> eingabeconvert;
					ok = ConvertToInt(eingabeconvert, add);
				} while (!ok);
				cout << "Deine neue Geschicklichkeit ist " << ds.addGeschicklichkeit(add) << endl;
				break;
			}
			else if (puffer == "Intelligenz")
			{
				do
				{
					cin >> eingabeconvert;
					ok = ConvertToInt(eingabeconvert, add);
				} while (!ok);
				cout << "Deine neue Intelligenz ist " << ds.addIntelligenz(add) << endl;
				break;
			}
			else if (puffer == "Charisma")
			{
				do
				{
					cin >> eingabeconvert;
					ok = ConvertToInt(eingabeconvert, add);
				} while (!ok);
				cout << "Dein neuer Charisma Wert ist " << ds.addCharisma(add) << endl;
				break;
			}
			else if (puffer == "Maxlp")
			{
				do
				{
					cin >> eingabeconvert;
					ok = ConvertToInt(eingabeconvert, add);
				} while (!ok);
				cout << "Deine neuen MaxLebenspunkte sind " << ds.addMaxLebenspunkte(add) << endl;
				ds.addaktLebenspunkte(add);
				break;
			}
			else
			{
				break;
			}
		}
		case 'r':
		{
			return ort;
		}
	}
	return ort;
}
