// presentation variabler.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
   
	setlocale(LC_ALL,"");
	
	double kostnad;
	double kilometerkostnad;
	double framkörningsavgift;
	int kilometer;
	
	//initierar variabler

	kilometerkostnad = 55.5;
	framkörningsavgift = 200.0;


	cout << "hur många kilometer ska du åka?";
		cout << endl;
		cin >> kilometer;

	kostnad = (kilometer * kilometerkostnad) + framkörningsavgift;
	
	cout << "Din resa kommer att kosta: " << kostnad << "kr." << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

