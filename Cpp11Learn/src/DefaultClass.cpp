//============================================================================
// Name        : DefaultClass.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#include "DefaultClass.h"
#include "InitializerList.h"

#include <iostream>


DefaultClass::DefaultClass()
{
    
    srand ((unsigned int) time(nullptr));
    
    Names nameGenerator;
    this->firstName = nameGenerator.getName();
    this->lastName = nameGenerator.getSurname();

    char buffer[80];
    this->currentDateTime(buffer);
    this->whenCreated = std::string(buffer);

}

DefaultClass::DefaultClass(const std::string& name, const std::string& surname) : firstName(name), lastName(surname)
{
    char buffer[80];
    this->currentDateTime(buffer);
	this->whenCreated = std::string(buffer);
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
void DefaultClass::currentDateTime(char* dateTime)
{
	time_t now = time(nullptr);
	struct tm  tmTime;

#ifndef VC
    tmTime = *localtime(&now);
#else
	localtime_s(&tmTime, &now);
#endif
	strftime(dateTime, sizeof(dateTime), "%d-%m-%Y %X", &tmTime);

}

const std::string DefaultClass::toString() const
{
	return (this->firstName + " " + this->lastName + " [Born on "+ this->whenCreated + "]" );
}
