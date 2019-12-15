#pragma once
/*
Hilfsfunktionen
*/

#include <windows.h>
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h> //for system()
#include "Charakter.h"
//#include "ort.h"

using namespace std;
class Spieler;

bool ConvertToInt(char eingabeconvert[10], int& add);

void timer(int stunde, int min, int sek);

int menü(Spieler ds, int& ort);