/*
	Lineare Suche
*/

#include "linSuche.h"

string toLowerString(string s)
{
	string str = s;
	for (unsigned int i = 0; i < s.size(); i++)
	{
		str[i] = tolower(s[i]);
	}
	return str;
}

int suchen(vector<widerstand>widDaten, int index, string suchWort)
{
	index = -1;
	string listenWort;
	suchWort = toLowerString(suchWort);
	for (int i = 0; i < widDaten.size(); i++)
	{
		listenWort = toLowerString(widDaten[i].widBauForm);
		if (suchWort.compare(listenWort) == 0)
		{
			index = i;
			break;
		}
	}
	return index;
}