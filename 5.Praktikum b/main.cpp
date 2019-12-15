/*
Praktikum 5 Spiele Projekt
05.12.2019
Autor: LB + Nico
*/

#include "Charakter.h"
#include "ort.h"

int main(void)
{
	SetConsoleTitle("Abenteuer im Koenigreich von Eldraine");
	SetConsoleOutputCP(1252); // für Umlaut-Ausgabe
	SetConsoleCP(1252); // für Umlaut-Eingabe
	Spieler ds;
	char eingabe;	
	bool ok = true;
	char ort = 1;
	
	while (true)
	{
		cout << "\n *** Willkommen im Königreich von Eldraine ***\n" << "\n --> Neues Spiel" << setw(17) << "[a/A]" << "\n --> Spiel laden" << setw(17) << "[l/L]";
		cout << "\n --> Highscore" << setw(19) << "[h/H]" << "\n --> Programm beenden" << setw(12) << "[b/B]" << "\n : ";
		cin >> eingabe;
		switch (tolower(eingabe))
		{
		case 'a'://Spiel
			ds = ChrErstellung();			
			while (ok == true)
			{
				
				switch (ort)
				{
				case '0'://Menü
					menü(ds, ort); break;
				case '1'://Starthüte
					ort1(ds); break;
				case '2'://Wald-Lichtung
					ort2(ds); break;
				case '3'://Dorf
					ort3(ds); break;
				case '4'://Tiefer Wald
					ort4(ds); break;
				}
				cout << "\n test";
			}
			break;
		case 'h'://Highscore

			break;
		case 'b'://Programm beenden
			cout << "\n\tProgramm beenden? [j/n].";
			cin >> eingabe;
			if (eingabe == 'j')
			{
				return 0;
			}
			break;
		}
	}
}
