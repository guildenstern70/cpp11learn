#include "Containers.h"

#include <array>
#include <vector>
#include <iterator>
#include <iostream>


void Containers::testAll() const
{
    this->arrayTest();
    this->vectorTest();
}

void Containers::arrayTest() const
{
    std::array<int, 5> arrayContainer = {1, 2, 3, 4, 5};

    for(int& i: arrayContainer)
        std::cout << i << ' ';
    std::cout << std::endl;
}

void Containers::vectorTest() const
{
    std::vector<int> vectorContainer;
    vectorContainer.reserve(10);
    for (int j=10; j>0; j--)
    {
        vectorContainer.push_back(j);
    }

    for(int& i: vectorContainer)
        std::cout << i << ' ';
    std::cout << std::endl;

}
