/*
Praktikum 3 Struktur Array
25.11.2019
Autor: LB
*/

#include "student.h"

//Funktion zum vergleichen von Namen
bool isNewName(student array[], int aktAnz, string fname, string vname)
{
	bool ok = true;
	student ds;

	for (unsigned int i = 0; i < DSANZ; i++)
	{
		string data_fName1 = fname;
		for (unsigned int i = 0; i < fname.size(); i++)
		{
			data_fName1[i] = tolower(fname[i]);
		}

		string data_fName2 = array[i].fName;
		for (unsigned int i = 0; i < array[i].fName.size(); i++)
		{
			data_fName2[i] = tolower(fname[i]);
		}

		string data_vName1 = vname;
		for (unsigned int i = 0; i < vname.size(); i++)
		{
			data_vName1[i] = tolower(vname[i]);
		}

		string data_vName2 = array[i].vName;
		for (unsigned int i = 0; i < array[i].vName.size(); i++)
		{
			data_vName2[i] = tolower(vname[i]);
		}

		if (data_fName1 == data_fName2 && data_vName2 == data_vName1) //Bei Gleichheit der eingegeben Namen zu einem Datensatz gibt es false als Rückgabewert

		{
			cout << "\n Der eingegebene Name " << fname << " " << vname << " existiert schon!\n";

			ok = false;
			break;
		}
	}
	return ok;
}

//Funktions zum erstellen von fortlaufenden Matrikelnummern
long generateStudentID(void)
{
	static int matrNr = 1001000; //Wird nur beim ersten Aufrufen initialisiert
	matrNr++;
	return matrNr;
}


//Funktion zum Einfügen von neuen Datensätzen
void insert(student array[], string fname, string vname, int& aktAnz)
{
	student ds;
	ds.fName = fname;
	ds.vName = vname;
	ds.matrNr = generateStudentID();
	array[aktAnz] = ds;
	aktAnz++;
}

//Funktions zur Ausgabe von Datensätzen
void printData(student array[], int aktAnz)
{
	for (int i = 0; i < aktAnz; i++)
	{
		cout << setw(14) << array[i].matrNr;
		cout << setw(15) << array[i].fName;
		cout << setw(14) << array[i].vName;
		cout << "\n";
	}
}
