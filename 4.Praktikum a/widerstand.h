#pragma once
/*
Praktikum 4
25.11.2019
Autor: LB
*/
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cstdlib>//für atof

using namespace std;

struct widerstand
{
	int dim;				//mio --> 0, ohm --> 1, kio --> 2, meo -->3
	string widBauForm;		//Kohleschicht, Metalloxid etc.
	double widWert;			//positive Wert größer Null
};

const int Länge1 = 15;
const int Länge2 = 6;
const int Länge3 = 2;

/*
Ausgabe der vom Benutzer eingegebenen  Widerstandsdatensaetze
@param1: widDaten / Vektorparameter vom Typ widerstand zum Abspeichern der Widerstandsdatensaetze, c.b.r
Rückgabewert: void
*/
void ausgabe(vector<widerstand> widDaten);

/*
Speichern der eingegebenen Werte im outputfilestream
@param1: widDaten / Vektorparameter vom Typ widerstand zum Abspeichern der Widerstandsdatensaetze, c.b.r
Rückgabewert : bool, ok --> true = Bedingung für weitere Ausfuehrung des Programms
*/
bool inDateiSchreiben(vector<widerstand> widDaten);

/*
Ablesen der Widerstandsdatensaetze aus dem inputfilestream
@param1: widDaten / Vektorparameter vom Typ widerstand zum Abspeichern der Widerstandsdatensaetze, c.b.r
Rückgabewert : bool, ok --> true = Bedingung für weitere Ausfuehrung des Programms
*/
bool ausDateiLesen(vector<widerstand>& widDaten);
