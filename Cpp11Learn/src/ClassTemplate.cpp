/*
 * ClassTemplate.cpp
 *
 *  Created on: Jun 19, 2013
 *      Author: alessio
 */

#include "ClassTemplate.h"

ClassTemplate::ClassTemplate(const string& name, const string& surname)
{
	this->cname = name;
	this->csurname = surname;
}

string ClassTemplate::toString() const
{
	return (this->cname + " " + this->csurname);
}


