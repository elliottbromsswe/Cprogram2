// exempel3.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int vikt[] = { 67, 54 };
	
	cout << "Innehåll ifältet vikt: "	vikt[]
		 << vikt[0] << '' << vikt[1] << endl;


	int temp = vikt[0];

	vikt[0] = vikt[1];

	vikt[1] = temp;

	cout << "Innnehåll i fältet vikt: " << vikt[0] << '' << vikt[1] << endl;

	return 0;
}

