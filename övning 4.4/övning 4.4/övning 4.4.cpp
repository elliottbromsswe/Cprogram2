// övning 4.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	int tal1;
	cout << "  mata in ett tal ";
	cin >> tal1;

	cout << "  nu körs tal1-- " << endl;
	int tal2 = tal1;
	int tal2 = tal2 -- ;
	int --tal1;
	cout << " tal-- " << tal2 << endl;
	cout << "--tal" << tal1;



	return 0;
}

