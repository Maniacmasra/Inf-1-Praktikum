/*
Praktikum Informatik Praktikum 1
Reihen- und Parallelschaltung ohmscher Wiederstände
14.10.2019
Autor: Leonardo Bendisch
*/

#include<iostream>
using namespace std;

void main(void)
{
	float r1 = 5;
	float r2 = 25;
	float rGesamt;
	float rGesamtP;

	rGesamt = r1 + r2;
	rGesamtP = ((1 / r1) + (1 / r2));

	cout << "rGesamt = "
		<< r1 << " + "
		<< r2 << " = "
		<< rGesamt << " Ohm";

	cout << "\n rGesamtP ((1/"
		<< r1 << ") + (1/"
		<< r2 << ")) --> "
		<< rGesamtP;

	cout << endl << endl << "\t";
	system("Pause");
}
