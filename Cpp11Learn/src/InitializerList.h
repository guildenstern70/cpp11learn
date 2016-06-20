//============================================================================
// Name        : DefaultClass.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#ifndef INITIALIZERLIST_H
#define INITIALIZERLIST_H

#include <string>
#include <vector>
#include <cstdlib>

class Names
{
public:
    Names();
    std::string getName() const;
    std::string getSurname() const;
private:
    std::vector<std::string>* names;
    std::vector<std::string>* surnames;
};

#endif //INITIALIZERLIST_H
