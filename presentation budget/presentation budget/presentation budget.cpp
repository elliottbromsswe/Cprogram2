// presentation budget.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include "stdafx.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");


	//Deklarationer
	double summa_intäckter;
	double summa_utgifter;
	double resultat;
	double lön;
	double försäkringskassan;
	double hyra;
	double el;
	double mat;
	double försäkringar;

	// Input
	cout << "Lön? ";
		cin >> lön;
	cout << endl;

	cout << "försäkringsbidrag:";
		cin >> försäkringskassan;
	cout << endl;

	cout << "Hemlös eller?... va kostar hyran? :";
		cin >> hyra;
	cout << endl;

	cout << "El va kostaran?:";
		cin >> el;
	cout << endl;

	cout << "käkar du eller blir du fet endå priset på maten tack:";
		cin >> mat;
	cout << endl;

	cout << "har du la försäkringar dååååellller (va kostarom) ?";
			cin >> försäkringar;

	
			for (int i = 0; i < 100; i = i + 1)
			{
				cout << "kalkylerar";
				cout << endl;
				Sleep(100);
			}


//beräknar summa intäkter och utgifter
	summa_intäckter = lön + försäkringskassan;
	summa_utgifter = hyra + el + mat + försäkringar;



	// bräkna resultatet 
	resultat = summa_intäckter - summa_utgifter;

	// Medelande till användaren 

	cout << "Resultat";
	cout << endl << endl;
	cout << resultat;
	cout << endl << endl;
	if (resultat > 0)
	{
		cout << "Grattis ditt misslyckade rövhål du klara dig ";
	}

	if (resultat < 0)
	{
		cout << "Fy fan va dålig du e på ekonomi hörru du ";
	}

	if (resultat == 0.0)
	{
		cout << "Mehhh du klarar dig nog";
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

