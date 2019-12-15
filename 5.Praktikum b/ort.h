#pragma once
/*
Orte
*/

#include <windows.h>
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h> //for system()
//#include "Charakter.h"
#include "support.h"

using namespace std;
class Spieler;

//Orte
char ort1(Spieler ds);//1 = Starthüte
char ort2(Spieler ds);//2 = Wald-Lichtung
int ort3(Spieler ds);//3 = Dorf
int ort4(Spieler ds);//4 = Tiefer Wald
