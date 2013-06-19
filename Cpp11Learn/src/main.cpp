//============================================================================
// Name        : main.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013
// Description : Cpp11Learn
//============================================================================

#include <iostream>

#include "ClassTemplate.h"

using namespace std;

int main()
{

	// Auto var
	auto i = 43;
	cout << "The answer is " << i << endl;

	// ClassTemplate
	ClassTemplate *ct = new ClassTemplate("Alessio", "Saltarin");
	cout << "ClassTemplate => " << ct->toString() << endl;
	cout << "ClassTemplate => Name = " << ct->getName() << endl;
	delete ct;

	return 0;
}
