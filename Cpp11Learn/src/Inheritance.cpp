//============================================================================
// Name        : Inheritance.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#include "Inheritance.h"

std::string Person::toString() const
{
    std::string personString;
    personString += this->name;
    personString += " ";
    personString += this->surname;
    return personString;
}

std::string Student::toString() const
{
    std::string personString;
    personString += this->name;
    personString += " ";
    personString += this->surname;
    personString += " (Student in ";
    personString += this->expertise;
    personString += ")";
    return personString;
}