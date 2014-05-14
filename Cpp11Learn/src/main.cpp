//============================================================================
// Name        : main.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#include <iostream>

#include "ClassTemplate.h"
#include "Containers.h"

using namespace std;

void testOutput(const string& testName)
{
    cout << endl << "======================" << endl;
    cout << testName << endl;
    cout << "======================" << endl;
}

int main()
{

	// Auto var
	testOutput("Auto VAR");
	auto i = 43;
	cout << "The answer is " << i << endl;

	// ClassTemplate
	testOutput("Classes");
	ClassTemplate *ct = new ClassTemplate("Alessio", "Saltarin");
	cout << "ClassTemplate => " << ct->toString() << endl;
	delete ct;

    // Containers
	testOutput("Containers");
	Containers *cont = new Containers();
	cont->testAll();
	delete cont;

	return 0;
}
