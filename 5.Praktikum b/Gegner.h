#pragma once
/*
Gegnerstellung
*/

#include <windows.h>
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

//Gegnertypen
struct Testgegner//Eigener Datentyp
{
	int Lebenspunkte = 20;
	int Stärke = 1;
	int Geschicklichkeit = 1;
};

