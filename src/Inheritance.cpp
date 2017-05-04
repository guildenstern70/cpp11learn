//============================================================================
// Name        : Inheritance.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#include "Inheritance.h"

std::string Person::toString() const
{
    std::string personString;
    personString += this->firstName;
    personString += " ";
    personString += this->lastName;
    return personString;
}

std::string Student::toString() const
{
    std::string personString;
    personString += this->firstName;
    personString += " ";
    personString += this->lastName;
    personString += " (Student in ";
    personString += this->expertise;
    personString += ")";
    return personString;
}