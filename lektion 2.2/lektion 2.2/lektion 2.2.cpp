// lektion 2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

#include <iostream>


int main()
{
	locale swedish("swedish");
	locale::global(swedish);

	while (true)
	{

	

	//variabler
	double midjemått;
	int tumstorlek;
	double tum_till_centimeter;

	midjemått = 0.0;
	tumstorlek = 0.0;
	tum_till_centimeter = 2.54;


	 cout << "ange midjemått\n";
	cin >> midjemått;



	//beräkningar
	//fyra räknesätt: + - * /

	tumstorlek = (int)(midjemått / tum_till_centimeter); //Typomvandlar till heltal.




														 // utskrift
	cout << "Tummstorlek" << tumstorlek << endl;

	cout << endl;


	}












    return 0;
}

