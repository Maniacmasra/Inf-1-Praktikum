#pragma once

/*
Praktikum 3 Struktur Array
25.11.2019
Autor: LB
*/
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <limits.h>
#include <ctime>
#include <stdio.h>
#include <algorithm>
#include <windows.h>

using namespace std;

const int DSANZ = 10;

//Definition eines neuen Datentyps
struct student //Eigener Datentyp student
{
	string fName; //Familienname
	string vName; //Vorname
	int matrNr; //Matrikelnummer
};

//Funktionsprototypen

/*
Eingabe von neuen Datensätzen ins Array
@param1: array[]/Alle aktuellen Datensätze, student, c.b.r.
@param2: fname/Eingegebener Familienname, string, c.b.v.
@param3: vname/Eingegebener Vorname, string, c.b.v.
@param4: aktAnz/Aktueller Datensatz, int, c.b.r.
Rückgabewert: void
*/
void insert(student array[], string fname, string vname, int& aktAnz);

/*
Überprüfung ob der Datensatz schon vorhanden ist
@param1: array[]/Alle aktuellen Datensätze, student, c.b.r.
@param2: aktAnz/Aktueller Datensatz, int, c.b.v.
@param3: fname/Eingegebener Familienname, string, c.b.v.
@param4: vname/Eingegebener Vorname, string, c.b.v.
Rückgabewert: 0 oder 1, bool
*/
bool isNewName(student array[], int aktAnz, string fname, string vname);

/*
Erstellen einer um 1 erhöhten Matrikelnummer
Rückgabewert: matrNr, long
*/
long generateStudentID(void);

/*
Ausgabe aller Datensätze
@param1: array[]/Alle aktuellen Datensätze, student, c.b.r.
@param2: aktAnz/Aktueller Datensatz, int, c.b.v.
Rückgabewert: void
*/
void printData(student array[], int aktAnz);

