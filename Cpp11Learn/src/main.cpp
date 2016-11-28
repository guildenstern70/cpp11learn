//============================================================================
// Name        : main.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#include <iostream>
#include <sstream>

#include "DefaultClass.h"
#include "Containers.h"
#include "Inheritance.h"
#include "OperatorOverloading.h"
#include "TextFile.h"
#include "ClassTemplateSpec.h"


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

	// Object creation (shared)
	auto ct_shared = std::make_shared<DefaultClass>();
    result << "DefaultClass => " << ct_shared->toString().c_str();
    testOutput("Class Template", result.str());
    result.str("");

    // Object creation (unique)
    unique_ptr<DefaultClass> ct_unique(new DefaultClass());
    result << "DefaultClass => " << ct_unique->toString().c_str();
    testOutput("Class Template", result.str());
    result.str("");

    // Containers
	unique_ptr<Containers> cont(new Containers());
    testOutput("Containers", cont->testAll());
    result.str("");

    // Inheritance
    Person alessio;
    Student elena;
    alessio.firstName = "Alessio"; alessio.lastName = "Saltarin";
    elena.firstName = "Elena"; elena.lastName = "Zambrelli"; elena.expertise = "Engineering";
    result << alessio.toString() << endl;
    result << elena.toString() << endl;
    testOutput("Inheritance", result.str());
    result.str("");

    // Operator Overloading
    Box newbox(10, 20, 30);
    result << newbox << endl;
    testOutput("Operator Overloading", result.str());
    result.str("");

    // Text Files;
    TextFile textFile("tempfile_prova.txt");
    if (textFile.writeTo("Prova prova prova"))
    {
        result << "Ok, file written" << endl;
        string prova;
        if (textFile.readFrom(prova))
        {
            result << "File contents: " << prova.c_str() << endl;
            if (textFile.deleteFile())
            {
                result << "File was correctly deleted." << endl;
            }
            else
            {
                result << "ERROR file was not deleted." << endl;
            }
        }
        else
        {
            result << "ERROR reading file " << endl;
            result << textFile.getErrorMessage() << endl;
        }
    }
    else
    {
        result << "ERROR writing file " << endl;
        result << textFile.getErrorMessage() << endl;
    }
    testOutput("Text File", result.str());
    result.str("");

    // Class Template Specialization
    testOutput("Class Template Specialization", classTemplateSpecTest());


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
