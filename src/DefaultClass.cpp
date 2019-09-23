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
#include <ctime>
#include <utility>


DefaultClass::DefaultClass()
{
    srand ((unsigned int) time(nullptr));
    
    Names nameGenerator;
    this->firstName = nameGenerator.getName();
    this->lastName = nameGenerator.getSurname();

    char buffer[160];
    this->currentDateTime(buffer);
    this->whenCreated = std::string(buffer);

}

DefaultClass::DefaultClass(std::string  name,
        std::string  surname) : firstName(std::move(name)), lastName(std::move(surname))
{
    char buffer[160];
    DefaultClass::currentDateTime(buffer);
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
	strftime(dateTime, sizeof(dateTime), "%d-%m-%Y %H:%M:%S", &tmTime);

}

std::string DefaultClass::toString() const
{
	return (this->firstName + " " + this->lastName + " [Born on "+ this->whenCreated + "]" );
}
