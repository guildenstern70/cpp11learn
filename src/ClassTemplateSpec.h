//============================================================================
// Name        : ClassTemplateSpec.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================


#ifndef CPP11LEARN_CLASSTEMPLATESPEC_H
#define CPP11LEARN_CLASSTEMPLATESPEC_H

#include <string>
#include "EnumClass.h"

template <typename T> struct Traits;

template<>
struct Traits<Fruit>
{
    static std::string name(int index)
    {
        switch (index)
        {
            case 0 :
                return "apple";
            case 1:
                return "orange";
            case 2:
                return "pear";
            default:
                return "unknown";
        }
    }
};

template<>
struct Traits<Color>
{
    static std::string name(int index)
    {
        switch (index)
        {
            case 0 :
                return "red";
            case 1:
                return "green";
            case 2:
                return "orange";
            default:
                return "unknown";
        }
    }
};

std::string classTemplateSpecTest();


#endif //CPP11LEARN_CLASSTEMPLATESPEC_H
