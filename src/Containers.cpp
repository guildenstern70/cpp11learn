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
#include <set>
#include <iostream>
#include <sstream>


Containers::~Containers() = default;

std::string Containers::testAll() const
{
    std::ostringstream result;
    result << this->arrayTest();
    result << this->vectorTest();
    result << this->setTest();
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

std::string Containers::setTest() const
{
    std::ostringstream result;
    std::set<int> gquiz1;

    // insert elements in random order
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
    gquiz1.insert(50); // only one 50 will be added to the set
    gquiz1.insert(10);

    for(auto& i: gquiz1)
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
