/*
Praktikum 4
09.12.2019
Autor: LB
*/
#include "widerstand.h"
#include "support.h"
#include "linSuche.h"

int main(void)
{
	system("color F1");
	vector<widerstand> widDaten(0);
	widerstand ds;          //ein Widerstandsdatensatz zum späteren Speichern in widDaten
	char chr, puffer[10];
	locale::global(locale("German_germany")); //Umlaute via Konsole
	bool ok = true;
	bool gesichert = false;
	int anz = -1;
	int index = -1;
	string suchWort, dim;
	ausDateiLesen(widDaten);	

	while (true)
	{
		cout << "\n\n Was wollen Sie tun?";
		cout << "\n Neuen Widerstand eingeben (n/N)";
		cout << "\n Widerstands-Datensätze ausgeben (a/A)";
		cout << "\n Widerstands-Datensätze auslesen (c/C)";
		cout << "\n Datensätze suchen (s/S)";
		cout << "\n Datensätze speichern (m/M)";
		cout << "\n Programm beenden (b/B)" << endl;
		cout << "\n : ";
		cin >> chr;
		switch (tolower(chr))
		{
		case 'n':
			system("cls");
			cout << "\n\n Eingabe eines neuen Datensatzes. "; //Widerstands-Bauform
			cout << "\n Widerstands-Bauform: ";
			cin >> ds.widBauForm;//Widerstands-Wert

			do
			{
				cout << "\n Widerstands-Wert ";
				cout << "(Dezimaltrennzeichen ist das Komma!): ";
				cin >> puffer;
				ok = ConvertToDouble(puffer, ds.widWert);//puffer von char array zu double konvertieren
			} while (!ok);

			do//Dimension des Widerstandswertes    
			{
				cout << "\n Widerstandsdimension: ";
				cout << "\n\t MiliOhm --> 1";
				cout << "\n\t     Ohm --> 2";
				cout << "\n\t KiloOhm --> 3";
				cout << "\n\t MegaOhm --> 4";
				cout << "\n\n\t --> ";
				cin >> puffer;
				ok = ConvertToInt(puffer, ds.dim);
				if (ds.dim < 1 || ds.dim > 4) ok = false;
			} while (!ok);
			widDaten.push_back(ds);
			anz++;
			gesichert = false;
			break;
		case 'a':
			ausgabe(widDaten);
			break;
		case 'c':
			system("cls");
			if (ausDateiLesen(widDaten))
			{
				cout << "\n Daten erfolgreich ausgelesen.\n";				
			}
			else
			{
				cerr << "\n Datei konnte nicht ausgelesen werden!\n";
			}
			break;
		case 's'://Suche
			cout << "\n\n  Suche einen passenden Datensatz für: ";
			cin >> suchWort;
			index = suchen(widDaten, anz, suchWort);
			if (index != -1)
			{
				suchWort = widDaten[index].widBauForm;
				switch (widDaten[index].dim)//zum zuweisen der passenden dim
				{
				case 1: dim = "Mili-Ohm"; break;
				case 2: dim = "Ohm"; break;
				case 3: dim = "Kilo-Ohm"; break;
				case 4: dim = "Mega-Ohm"; break;
				default: break;
				}
				cout << right << setw(20) << widDaten[index].widBauForm;
				cout << right << setw(10) << setprecision(4) << widDaten[index].widWert;
				cout << right << setw(10) << dim;
				index = -1;
			}
			break;
		case 'm':
			system("cls");
			if (!inDateiSchreiben(widDaten))
			{
				cerr << "\n Datei konnte zum Speichern nicht geöffnet werden!\n";
			}
			else
			{
				cout << "\n Daten erfolgreich gesichert.\n";
				ausgabe(widDaten);
				gesichert = true;
			}
			break;
		case 'b'://Programm beenden
			
			if (gesichert == true)
			{
				return 0;
			}
			else
			{
				char eingabe;
				cout << "\nSie haben die Daten noch nicht gesichert trotzdem das Programm beenden? [j/n].";
				cin >> eingabe;
				if (tolower(eingabe == 'j'))
				{
					return 0;
				}
				break;
			}
		}//switch
	}//while
	return EXIT_SUCCESS;
}//main

