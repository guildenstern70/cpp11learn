//============================================================================
// Name        : main.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#include <iostream>
#include <sstream>

#include "ClassTemplate.h"
#include "Containers.h"
#include "Inheritance.h"

using namespace std;

void testOutput(const string& testName, const string& testOutput);

int main()
{

    ostringstream result;

	// Auto var
	auto i = 43;
    result << "The answer is " << i;
    testOutput("Auto VAR", result.str());
    result.str("");

	// ClassTemplate
	auto ct = std::make_shared<ClassTemplate>();
    result << "ClassTemplate => " << ct->toString();
    testOutput("Class Template", result.str());
    result.str("");

    // Containers
	auto cont = std::make_shared<Containers>();
    testOutput("Containers", cont->testAll());
    result.str("");

    // Inheritance
    Person alessio;
    Student elena;
    alessio.name = "Alessio"; alessio.surname = "Saltarin";
    elena.name = "Elena"; elena.surname = "Zambrelli"; elena.expertise = "Engineering";
    result << alessio.toString() << endl;
    result << elena.toString() << endl;
    testOutput("Inheritance", result.str());
    result.str("");

	return 0;
}

void testOutput(const string& testName, const string& testOutput)
{
    cout << endl << "======================" << endl;
    cout << testName << endl;
    cout << "----------------------" << endl;
    cout << testOutput << endl;
    cout << "======================" << endl << endl;
}
