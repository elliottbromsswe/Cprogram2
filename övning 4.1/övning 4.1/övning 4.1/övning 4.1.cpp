// övning 4.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double tal1, tal2;
	cout << "Mata in två heltal:";
	cin >> tal1 >> tal2;
	cout << tal1 << '/' << tal2 << " = " << tal1/tal2 << endl;
	cout << tal1 << '%' << tal2 << " = " << tal1%tal2 << endl;
	
	return 0;
}

