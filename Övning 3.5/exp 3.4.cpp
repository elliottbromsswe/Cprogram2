// exp 3.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "tid: ";
	string tid;
	getline(cin, tid);
	int pos = tid.find(':', 0);
	string timme = tid.substr(0, pos);
	int start = pos + 1;
	int langd = tid.length() - start;
	string org = tid.substr(start, langd);
	cout << "timme" << timme << endl;
	cout << "minut" << org << endl;
	
	
	
	
	return 0;
}

