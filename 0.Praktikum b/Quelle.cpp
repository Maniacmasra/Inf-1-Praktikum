/*
Praktikum Informatik Praktikum 1
Variable und Ausdr�cke
14.10.2019
Autor: Leonardo Bendisch
*/

#include<iostream>
using namespace std;

void main(void)
{
	int wert1 = 5;	//Definition einer Ganzzahlvariablen
	float wert2;		//Deklaration -"-	-"-
	float ergebnis;	//Deklaration einer Gleitpunktvariablen

	wert2 = 2 * wert1; //Zuweisung eines Wertes �ber einen Ausdruck

	ergebnis = (wert1 + wert2) / 2;

	cout << "\n Ergebnis ("
		<< wert1 << " + "
		<< wert2 << ")/2 --> "
		<< ergebnis;


	cout << endl << endl << "\t";
	system("Pause");
}
