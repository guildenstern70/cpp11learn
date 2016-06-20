//============================================================================
// Name        : DefaultClass.cpp
// Author      : Alessio Saltarin
// Version     :
// Copyright   : (C) Alessio Saltarin 2013-2016
// Description : Cpp11Learn
//============================================================================

#include <iosfwd>
#include "InitializerList.h"

Names::Names() {
    this->names = new std::vector<std::string>{"Alessio",
                                               "Giovanni",
                                               "Elia",
                                               "Andrea",
                                               "Elena",
                                               "Rosa",
                                               "Daniela",
                                               "Greta"};
    this->surnames = new std::vector<std::string>{"Rossi",
                                                  "Comolli",
                                                  "Zambrelli",
                                                  "Santagata",
                                                  "Marelli",
                                                  "Falotti",
                                                  "Zagni"};
}

std::string Names::getName() const {
    unsigned long pos = rand() % this->names->size();
    return this->names->at(pos);
}

std::string Names::getSurname() const {
    unsigned long pos = rand() % this->surnames->size();
    return this->surnames->at(pos);
}
