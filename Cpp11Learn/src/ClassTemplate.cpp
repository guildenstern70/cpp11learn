//============================================================================
// Name        : ClassTemplate.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2015
// Description : Cpp11Learn
//============================================================================

#include "ClassTemplate.h"
#include "InitializerList.h"

#include <iostream>
#include <ctime>


ClassTemplate::ClassTemplate()
{
    
    srand ((unsigned int) time(nullptr));
    
    Names nameGenerator;
    this->cname = nameGenerator.getName();
    this->csurname = nameGenerator.getSurname();

    char buffer[80];
    this->currentDateTime(buffer);
    this->ccreated = std::string(buffer);

}

ClassTemplate::ClassTemplate(const std::string& name, const std::string& surname) : cname(name), csurname(surname)
{
    char buffer[80];
    this->currentDateTime(buffer);
	this->ccreated = std::string(buffer);
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
void ClassTemplate::currentDateTime(char* dateTime)
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

const std::string ClassTemplate::toString() const
{
	return (this->cname + " " + this->csurname + " [Born on "+ this->ccreated + "]" );
}
