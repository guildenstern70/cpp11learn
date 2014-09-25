//============================================================================
// Name        : ClassTemplate.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#include "ClassTemplate.h"

#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

ClassTemplate::~ClassTemplate() {}

ClassTemplate::ClassTemplate(const std::string& name, const std::string& surname)
{
	this->cname = name;
	this->csurname = surname;
	this->ccreated = this->currentDateTime();
}

Name ClassTemplate::getRandomName() const
{
    int index = rand() % 6;
    return static_cast<Name>(index);
}

Surname ClassTemplate::getRandomSurname() const
{
    int index = rand() % 6;
    return static_cast<Surname>(index);
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const std::string ClassTemplate::currentDateTime() const
{
    time_t     now = time(0);
    struct tm  tmTime;
    char       buf[80];
    tmTime = *localtime(&now);
    strftime(buf, sizeof(buf), "%d-%m-%Y %X", &tmTime);
    return buf;
}

const std::string ClassTemplate::toString() const
{
	return (this->cname + " " + this->csurname + " [Born on "+ this->ccreated + "]" );
}
