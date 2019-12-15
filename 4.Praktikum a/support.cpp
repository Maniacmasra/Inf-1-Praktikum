/*
Praktikum 4
09.12.2019
Autor: LB
*/

#include "support.h"

bool ConvertToInt(char puffer[10], int& zahl)
{
	string sPuffer = puffer;
	for (unsigned int i = 0; i < sPuffer.size(); i++)
	{
		if (!isdigit(sPuffer[i])) return false;
	}
	zahl = atoi(puffer);
	return true;
}

bool ConvertToDouble(char puffer[10], double& zahl)
{
	string sPuffer = puffer;
	for (unsigned int i = 0; i < sPuffer.size(); i++)
	{
		if (!isdigit(sPuffer[i]) && sPuffer[i] != ',') return false;
	}
	zahl = atof(puffer);
	return true;
}

