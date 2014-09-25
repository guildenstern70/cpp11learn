//============================================================================
// Name        : main.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#include <iostream>
#include <memory>

#include "ClassTemplate.h"
#include "Containers.h"


using namespace std;

void testOutput(const string& testName);

int main()
{

	// Auto var
	testOutput("Auto VAR");
	auto i = 43;
	cout << "The answer is " << i << endl;

	// ClassTemplate
	testOutput("Classes");
	auto ct = std::make_shared<ClassTemplate>("Alessio", "Saltarin");
	cout << "ClassTemplate => " << ct->toString() << endl;

    // Containers
	testOutput("Containers");
	auto cont = std::make_shared<Containers>();
	cont->testAll();

	return 0;
}

void testOutput(const string& testName)
{
    cout << endl << "======================" << endl;
    cout << testName << endl;
    cout << "======================" << endl;
}
