// exempel3.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	
	locale swedish("swedish");
	locale::global(swedish);
	
	
	int vikt[] = { 30, 20, 100 };
	
	cout << "Innehåll ifältet vikt: " << vikt[0] << ' ' << vikt[1] << ' ' << vikt[2] << endl;


	int temp = vikt[0];

	vikt[0] = vikt[1];

	vikt[1] = temp;

	cout << "Innnehåll i fältet vikt efter bytet: " << vikt[2] << ' ' << vikt[0] <<  ' ' << vikt[1] << ' ' << endl;

	return 0;
}

