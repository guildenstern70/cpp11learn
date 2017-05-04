//============================================================================
// Name        : DefaultClass.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#ifndef INITIALIZER_LIST_H
#define INITIALIZER_LIST_H

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

#endif //INITIALIZER_LIST_H
