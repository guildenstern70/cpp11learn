//============================================================================
// Name        : Containers.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#ifndef CONTAINERS_H
#define CONTAINERS_H

#include <string>

class Containers
{
    public:
        Containers() = default;
        std::string testAll() const;
        virtual ~Containers();
    protected:
        std::string vectorTest() const;
        std::string arrayTest() const;
    private:
};

#endif // CONTAINERS_H

