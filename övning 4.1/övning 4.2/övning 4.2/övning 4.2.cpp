// övning 4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int tid;
	cout << "Mata in en tidsangivelse i månader:  ";
	cin >> tid;
	int year = tid / 12;
	int month = tid % 12;
	cout << tid << "månader =" << year << "år och " << month << " mån" << endl;
	
	return 0;
}

