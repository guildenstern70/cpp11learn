//============================================================================
// Name        : Containers.h
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2014
// Description : Cpp11Learn
//============================================================================

#ifndef CONTAINERS_H
#define CONTAINERS_H

class Containers
{
    public:
        Containers() {}
        void testAll() const;
        virtual ~Containers();
    protected:
        void vectorTest() const;
        void arrayTest() const;
        void listTest() const;
    private:
};

#endif // CONTAINERS_H

