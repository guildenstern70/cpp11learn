//============================================================================
// Name        : Containers.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#include "Containers.h"

#include <array>
#include <vector>
#include <iostream>
#include <sstream>


Containers::~Containers() {}

std::string Containers::testAll() const
{
    std::ostringstream result;
    result << this->arrayTest();
    result << this->vectorTest();
    return result.str();
}

std::string Containers::arrayTest() const
{
    std::ostringstream result;
    std::array<int, 5> arrayContainer = { {1, 2, 3, 4, 5} };

    for(auto& i: arrayContainer)
        result << i << ' ';
    result << std::endl;

    return result.str();
}

std::string Containers::vectorTest() const
{
    std::ostringstream result;

    std::vector<int> vectorContainer;
    vectorContainer.reserve(10);
    for (auto j=10; j>0; j--)
    {
        vectorContainer.push_back(j);
    }

    for(auto& i: vectorContainer)
        result << i << ' ';
    result << std::endl;

    return result.str();

}
