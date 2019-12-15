/*
Praktikum 2 Array - Operationen
9.11.2019
Autor: LB
*/
#include <string.h>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

bool isStrdigit(char* string) //Funktion zur Überprüfung ob char eine Zahl ist
{
	int i = 0;

	if (string[0] == '-') //- wird übersprungen
	{
		i = 1;
	}
	while (string[i] != '\0') //sting wird durch nullkette geteilt
	{
		if (!isdigit(string[i])) //Geht jeden Wert durch
		{
			return false;
		}
		i++;
	}
	return true;
}

int main(void)
{

	char eingabe = 0;
	char puffer[4];
	const int ANZAHL = 100;
	srand(time(0)); //zufälligere Zahlen durch Generator
	int feld[ANZAHL] = {};
	bool zerzeugt = false; //Erzeugung der Zufallswerte
	int anz = 0;

	while (anz == 0) //Bedingung für Wiederholung
	{

		cout << "\nBitte einen Wert (1 ... 100) eingeben: ";
		cin >> puffer;
		cout << "\n ";

		if (isStrdigit(puffer)) //Funktion wird aufgerufen
		{
			anz = atoi(puffer); //Umwandlung

			if (anz > 100) //falls anz größer als 100 ist
			{
				anz = 100;
				cout << "\nDer Wert ist hoeher als 100, weswegen das Maximum von 100 initalisiert wurde!\n";
			}
			if (anz < 0) //falls anz kleiner als 0 ist
			{
				anz = 0;
				cout << "\nKein Wert zwischen 1 und 100 eingegeben!\n";
			}
		}
		else
		{
			cout << "\nKein Wert zwischen 1 und 100 eingegeben!\n";
		}
	}
	system("cls");
	cout << "\n Anzahl der Feldelemente: " << anz ;

	while (true)
	{

		cout << "\n\n *** Was wollen Sie tun? ***\n\n";
		cout << "\n Zufallswerte erzeugen [i/I]:";
		cout << "\n Das Feld ausgeben [a/A]";
		cout << "\n Programm beenden [b/B]";
		cout << "\n : ";
		cin >> eingabe;

		switch (tolower(eingabe)) //tolower wandelt Großbuchstaben um
		{

		case 'i':

			for (int i = 0; i < anz; i++)
			{
				feld[i] = rand() % 1000 + 1;
			};
			cout << "\n\tZufallszahl erzeugt.";
			zerzeugt = true;

			break;
		case 'a':

			if (zerzeugt == true)
			{
				cout << "\n\tAlle Feldelemente ausgeben.\n\n";

				for (int i = 0; i < anz; i++)
				{
					cout << setw(5) << feld[i];
				}
				zerzeugt = false;

			}
			else
			{
				cout << "\n\tBitte zuerst Zufallswerte erzeugen!";
			}

			break;

		case 'b':
			cout << "\n\tProgramm beenden? [j/n].";
			cin >> eingabe;
			if (eingabe == 'j')
			{
				return 0;
			}
			break;

		case 't': //Easter Egg
			int blz = 20, stz = 1, i, zeile;
			for (zeile = 0; zeile < 10; zeile++)
			{
				for (i = 0; i < blz; i++) cout << ' ';
				for (i = 0; i < stz; i++) cout << '*';
				blz--; stz += 2;
				cout << '\n';
			}
			cout << "\n\t ** Frohe Weihnachten!**";
			break;
		}
	}
}