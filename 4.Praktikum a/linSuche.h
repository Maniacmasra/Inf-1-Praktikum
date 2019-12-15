#pragma once
#include <vector>
#include <string>
#include "widerstand.h"

using namespace std;

struct widerstand;

/*
Stingconverter zu einem kompletten lowercase string
@param1: string s / c.b.v
Rückgabewert : string / der lowercase String wird zurückgegeben
*/
string toLowerString(string s);

/*
Linearer Suchalgorithmus für den Widerstandsdatensatz im Vektor widDaten
@param1: widDaten / Vektorparameter vom Typ widerstand zum Abspeichern der Widerstandsdatensaetze, c.b.r
@param2: string suchwort / c.b.v
@param3: int& index / c.b.r
Rückgabewert : int / Position der gesuchten WidBauForm wird zurückgegeben
*/
int suchen(vector<widerstand>widDaten, int index, string suchWort);