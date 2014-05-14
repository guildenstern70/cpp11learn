/*
 * ClassTemplate.cpp
 *
 *  Created on: Jun 19, 2013
 *      Author: alessio
 */

#include "ClassTemplate.h"
#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>


ClassTemplate::ClassTemplate(const string& name, const string& surname)
{
	this->cname = name;
	this->csurname = surname;
	this->ccreated = this->currentDateTime();
}

Name ClassTemplate::getRandomName() const
{
    int index = rand() % 6;
    return (Name)index;
}

Surname ClassTemplate::getRandomSurname() const
{
    int index = rand() % 6;
    return (Surname)index;
}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const string ClassTemplate::currentDateTime() const
{
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%d-%m-%Y %X", &tstruct);
    return buf;
}

const string ClassTemplate::toString() const
{
	return (this->cname + " " + this->csurname + " [Born on "+ this->ccreated + "]" );
}


