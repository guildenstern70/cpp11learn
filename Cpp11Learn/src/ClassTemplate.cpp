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


ClassTemplate::ClassTemplate()
{
    
    srand (time(NULL));
    
    Names nameGenerator;
    this->cname = nameGenerator.getName();
    this->csurname = nameGenerator.getSurname();
    this->ccreated = this->currentDateTime();
}

ClassTemplate::ClassTemplate(const std::string& name, const std::string& surname) : cname(name), csurname(surname)
{
	this->ccreated = this->currentDateTime();
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
std::string ClassTemplate::currentDateTime()
{
	time_t now = time(nullptr);
	struct tm  tmTime;
	char       buf[80];
#ifndef VC
    tmTime = *localtime(&now);
#else
	localtime_s(&tmTime, &now);
#endif
	strftime(buf, sizeof(buf), "%d-%m-%Y %X", &tmTime);
	return buf;
}

const std::string ClassTemplate::toString() const
{
	return (this->cname + " " + this->csurname + " [Born on "+ this->ccreated + "]" );
}
