//============================================================================
// Name        : Containers.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#ifndef CONTAINERS_H
#define CONTAINERS_H

#include <string>

class Containers
{
    public:
        Containers() {}
        std::string testAll() const;
        virtual ~Containers();
    protected:
        std::string vectorTest() const;
        std::string arrayTest() const;
        void listTest() const;
    private:
};

#endif // CONTAINERS_H

