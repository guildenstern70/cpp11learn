//============================================================================
// Name        : Inheritance.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#ifndef INHERITANCE_H_
#define INHERITANCE_H_

#include <string>

struct Person
{
    std::string name;
    std::string surname;
    virtual std::string toString() const;
};

struct Student : Person
{
    std::string expertise;
    virtual std::string toString() const override;
};

#endif