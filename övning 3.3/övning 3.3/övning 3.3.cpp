// övning 3.3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	cout << "Hej vad heter du ? (ett namn tack ): ";
	char namn[20];
	cin >> namn;
	cin.ignore(1000, '\n');
	cout << "Ge ditt telefonnumer utan mellanslag :";
	char tel[15];
	cin >> tel;
	cout << "Hej " << namn << "Ditt telefonnummer är" << tel;
	
	
	
	
	return 0;
}

