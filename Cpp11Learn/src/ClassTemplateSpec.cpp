//
// Created by Alessio Saltarin on 20/06/16.
//

#include "ClassTemplateSpec.h"

#include <iostream>
#include <sstream>

using namespace std;

string classTemplateSpecTest()
{
    stringstream oss;
    for (int i=0; i!=3; ++i)
    {
        oss << Traits<Color>::name(i) << " ";
        oss << Traits<Fruit>::name(i) << std::endl;
    }

    return oss.str();
}

