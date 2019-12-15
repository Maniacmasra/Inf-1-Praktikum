#pragma once
/*
Praktikum 4
09.12.2019
Autor: LB
*/
#include <iostream>
#include <string>
#include <cstdlib>//für atof

using namespace std;

/*
Konvertierung der Widerstandsdimensionen von Strings zu Double-Werten
@param1: @param1: puffer / Eingabe , c.b.r
@param2: int zahl / c.b.r
Rückgabewert : bool, ok --> true = Bedingung für weitere Ausfuehrung des Programms
*/
bool ConvertToInt(char puffer[10], int& zahl);

/*
Konvertierung der Widerstands-Werte von Strings zu Integern
@param1: puffer / Eingabe
@param2: double zahl / c.b.r
Rückgabewert : bool, ok --> true = Bedingung für weitere Ausfuehrung des Programms
*/
bool ConvertToDouble(char puffer[10], double& zahl);