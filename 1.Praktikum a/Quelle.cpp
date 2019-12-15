/*
Praktikum Informatik Praktikum 1
Variablen ausgeben
28.10.2019
Autor: Leonardo Bendisch
*/

#include<iostream>
using namespace std;

void main(void)
{
	/*Festlegung der Konstanten*/

	const double eps0 = 8.86E-12;

	/*Deklaration der Variablen*/

	double flaeche;
	double d;
	double epsr;
	double C;

	/*while Funktion*/

	while (true)
	{

		/*Ausgabe von Informationen*/

		cout << " *** Berechnung der Kapazitaet eines Plattenkondensators *** ";
		cout << "\n_____________________________________________________________";

		cout << "\n\n(Zur Eingabe von reellen Zahlen den Dezimalpunkt benutzen!)";

		cout << "\n\nEingabe der Kondensatorflaeche [cm2]: ";

		/*Eingabe der Werte*/

		cin >> flaeche;

		/*Umrechnung mit Neubelegung der Variablen*/

		flaeche = flaeche * (1E-4); /*cm² in m²*/

		cout << "\nEingabe des Kondensatorplattenabstand [mm]: ";
		cin >> d;

		d = d * (1E-3); /*mm in m*/

		cout << "\nEingabe der relativen Dielektrizitaetskonstante [z.B. 1.0]: ";
		cin >> epsr;

		/*Rechnung*/

		C = eps0 * epsr * (flaeche / d);


		cout << "\nKapazitaet C = "
			<< C * 1E9 << " nF \n\n\n";
	}

}