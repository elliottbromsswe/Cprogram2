// första lektionen.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	
	locale swedish("swedish");
	locale::global(swedish);
	  cout << "\t Hello, World!\n\t";
	  cout << "halllllå ellller\n\t";

	
	
	return 0;
}