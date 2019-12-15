/*
Orte
*/
#include "ort.h"

char eingabe;
int stunde, min, sek, ort;
//einmalige Events
static bool ort1Eventa = true;
static bool ort1Eventb = true;
static bool ort1Eventc = true;
static bool ort2Event = true;
static bool ort3Eventa = true;

char ort1(Spieler ds)//Starthüte
{
	system("cls");
	if (ort1Eventa == true)
	{
		cout << "Puh mein Kopf!\nWo bin ich ?\nhm, sieht nach einer verlassenen Hütte aus";
		ort1Eventa = false;
	}	
	while (true)
	{
		cout << "\n Die Hütte durchsuchen (1) oder ";
		cout << "\n die Hütte verlassen (2)";
		cout << "\n Was sollte ich tun?";
		cout << "\n : ";
		cin >> eingabe;
		switch (tolower(eingabe))
		{
		case '1':
			cout << "In der Hütte scheint nicht viel zu seien. Ein Bett, ein Schrank und eine Kiste.\n Nicht zu vergessen der viele Staub und die Spinnenweben";
			cout << "\n Schrank durchsuchen (1) oder ";
			cout << "\n die Kiste öffnen (2)\n : ";
			cin >> eingabe;
			switch (tolower(eingabe))
			{
			case '1':
				if (ort1Eventb == true)
				{
					cout << "In dem Schrank liegt ein kleiner Dolch. Der könnte im Moment sehr nützlich sein";
//Dolch bekommen
					ort1Eventb = false;
				}
				else
				{
					cout << "Den Dolch habe ich schon mitgenommen";
				}		
				break;
			case '2':
				cout << "Die Kiste ist wunderschön verziert.\n...Oh, die Kiste hat ein Zahlenschloss.\n : ";
				cin >> eingabe;
				if (eingabe == 0521)
				{
					if (ort1Eventc == true)
					{
						cout << "Als ich die Kiste öffne schießt eine Lichtkugel durch den Raum und trifft mich nachdem sie ein paar mal durch den Raum geflogen ist ... Mir wird schwarz vor Augen";
						ds.addMaxLebenspunkte(10), ds.addaktLebenspunkte(10); ds.addStärke(1), ds.addGeschicklichkeit(1), ds.addIntelligenz(1),  ds.addCharisma(1);
						ort1Eventc = false;
						//system("cls");//Timer zum aufwachen						
						//stunde = 0; min = 0; sek = 20;
						//timer(stunde,min,sek);					
						cout << "Was war das gerade und ist, dass das zweite mal das ich in dieser Hütte aufwache oder ...";
					}
					else
					{
						cout << "Nichts mehr drin";
					}
				}
				else
				{
					cout << "Schade...\nDie Kiste scheint magisch versiegelt zu sein also mit Gewalt brauch ich es erst gar zu versuchen.";
				}
				break;
			}
			break;
		case '2':
			cout << "Ahh, frische Luft! In der Hütte war es ganz schön stickig.";
			ort = 2;
			return ort;
		case 'm':
			ort = 0;
			return ort;			
		}
	}
}

char ort2(Spieler ds)//Wald-Lichtung
{
	cout << "Ich betrete eine Lichtung kurz vor einem Wald.\n";
	cout << "Ich könnte der Lichtung tiefer in den Wald folgen... In der anderen Richtung erblicke ich aber ein kleines Dorf.";
	while (true)
	{
		cout << "\n Die Lichtung durchsuchen (1)";
		cout << "\n Tiefer in den Wald gehen (2)";
		cout << "\n Den Weg zum Dorf einschlagen (3)";
		cout << "\n Die Hütte betreten (4)\n : ";
		cin >> eingabe;
		switch (tolower(eingabe))
		{
		case '1':			
			if (ort2Event == true)
			{
				cout << "Mein Blick schweift über die Lichtung. Es ist sehr schattig durch die Bäume, doch ein paar Sonnenstrahlen erhellen ein Loch in einem der Bäume.\n ";
				cout << "Irgendwas glänzt da doch und als ich näher gehe um zu gucken finde ich das Nest einer Elster.\n Ein Goldstück liegt darin. Ich denke ich habe wohl eine bessere Verwendung dafür.";
				ds.addGold(1); ort2Event = false;
			}
			cout << "Mehr finde ich hier wohl nicht.";
			break;
		case '2'://Tiefer Wald
			cout << "Das Dorf schein mir gerade die beste wahl.";
			ort = 4;
			return ort;
			break;
		case '3'://Dorf
			cout << "Das Dorf schein mir gerade die beste wahl.";
			ort = 3;
			return ort;;
			break;
		case '4'://Hütte
			cout << "Ich glaube ich schaue mir nochmal die Hütte an.";
			ort = 1;
			return ort;;
			break;
		case 'm':
			ort = 0;
			return ort;
			break;
		}
	}
}

int ort3(Spieler ds)//Dorf
{
	if (ort3Eventa == true)
	{
		cout << "Ein Mann lungert vor dem Dorf\n Mann: ";

//Kampf
		ort3Eventa = false;
	}

	ort = 1;
	return ort;;
}

int ort4(Spieler ds)//Tiefer Wald
{
	//Labyrinth
	ort = 1;
	return ort;;
}
