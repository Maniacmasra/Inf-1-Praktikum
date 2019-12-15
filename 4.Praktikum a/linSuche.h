#pragma once
#include <vector>
#include <string>
#include "widerstand.h"

using namespace std;

struct widerstand;

/*
Stingconverter zu einem kompletten lowercase string
@param1: string s / c.b.v
R�ckgabewert : string / der lowercase String wird zur�ckgegeben
*/
string toLowerString(string s);

/*
Linearer Suchalgorithmus f�r den Widerstandsdatensatz im Vektor widDaten
@param1: widDaten / Vektorparameter vom Typ widerstand zum Abspeichern der Widerstandsdatensaetze, c.b.r
@param2: string suchwort / c.b.v
@param3: int& index / c.b.r
R�ckgabewert : int / Position der gesuchten WidBauForm wird zur�ckgegeben
*/
int suchen(vector<widerstand>widDaten, int index, string suchWort);