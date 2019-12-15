/*
Praktikum 3 Struktur Array
25.11.2019
Autor: LB
*/
#include "student.h"

using namespace std;

int main(void)
{
	char eingabe = 0;
	int aktAnz = 0;
	student* studentArray = NULL;   //Dynamische Feldvariable
	studentArray = new student[DSANZ];
	SetConsoleOutputCP(1252); // für Umlaut-Ausgabe
	SetConsoleCP(1252); // für Umlaut-Eingabe

	while (true)
	{
		cout << "\n *** Was wollen Sie tun? ***\n";
		cout << "\n --> Eingabe eines neuen Studentendatensatzes [e/E]:";
		cout << "\n --> Ausgabe der Studentendatensätze [a/A]";
		cout << "\n --> Programm beenden [b/B]";
		cout << "\n : ";
		cin >> eingabe;

		switch (tolower(eingabe))
		{

		case 'e':
			system("cls"); //Inhalt des Eingabefensters löschen

			if (aktAnz < DSANZ)
			{
				string fname;
				string vname;
				int test = aktAnz;
				cout << "\n Familienname der/des Studierenden: ";
				cin >> fname;
				do //Abfrage bei gleicher Nameskonstelation
				{
					cout << "\n Vorname der/des Studierenden: ";
					cin >> vname;
					if (isNewName(studentArray, aktAnz, fname, vname))
					{
						insert(studentArray, fname, vname, aktAnz);
						cout << "\n Das Einfuegen war erfolgreich!\n";
					}
				} while (aktAnz == test);
			}
			else
			{
				cout << "\nAlle Speicherplätze sind belegt!";
			}
			break;

		case 'a':
			if (aktAnz > 0)
			{
				cout << setw(13) << "\nMatrikelnummer";
				cout << setw(15) << "Familienname";
				cout << setw(15) << "Vorname\n";
				printData(studentArray, aktAnz);
			}
			else
				cout << "\nKeine Datensätze vorhanden!\n";
			break;

		case 'b':
			cout << "\n\tProgramm beenden? [j/n].";
			cin >> eingabe;
			if (eingabe == 'j')
			{
				return 0;
			}
			break;

		case 'r': //Easter Egg

			int zahl, anzver, versuche = 0;
			int rat;
			cout << "Ich denke mir eine Zahl zwischen 1 und 100.\nWelche ist es ?\n";
			srand(time(NULL));
			zahl = rand() % 100 + 1;
			cout << "Anzahl der Versuche eingeben: ";
			cin >> anzver;

			do
			{
				printf("Zahl eingeben: ");
				cin >> rat;
				if (rat > zahl) cout << "Zu gross !\n";
				if (rat < zahl) cout << "Zu klein !\n";
				versuche++;
			} while (rat != zahl && versuche < anzver);

			if (rat == zahl)
			{
				printf("\n\t   GEWONNEN :*\n\n");
				cout << "\t .-.     .-.\n";
				cout << "\t.****. .****.\n";
				cout << "\t.*****.*****.\n";
				cout << "\t .*********.\n";
				cout << "\t  .*******.\n";
				cout << "\t   .*****.\n";
				cout << "\t    .***.\n";
				cout << "\t     .*.\n";
				cout << "\t      .\n";
			}
			else printf("Verloren! Die gesuchte Zahl war %d\n", zahl);
			break;
		}
	}
}