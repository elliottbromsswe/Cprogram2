// 3.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "e-post: ";
	string epost;
	getline(cin, epost);
	int pos = epost.find('@', 0);
	string person = epost.substr(0, pos);
	int start = pos + 1;
	int langd = epost.length() - start;
	string org = epost.substr(start, langd);
	
	
	
	
	
	
	return 0;
}

