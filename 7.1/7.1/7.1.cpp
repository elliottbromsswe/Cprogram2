// 7.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	
	double main;
	cout << "Vill du testa en programsats? (j/n)";
	cin >> main;
	if (main >2)
	{
		cout << "Du svarade ja ";
	}
	else
	{
		cout << "Du svarade nej ";
	}
	
	return 0;
}

