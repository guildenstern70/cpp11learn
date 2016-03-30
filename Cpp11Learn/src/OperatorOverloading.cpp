//
// Created by Alessio Saltarin on 30/03/16.
//

#include "OperatorOverloading.h"

Box::Box()
{
    this->l = 0;
    this->b = 0;
    this->h = 0;
}

Box::~Box()
{
}

Box::Box(int length, int breadth, int height)
{
    this->l = length;
    this->b = breadth;
    this->h = height;
}

Box::Box(const Box& box)
{
    this->l = box.getLength();
    this->b = box.getBreadth();
    this->h = box.getHeight();
}

long long Box::CalculateVolume() const
{
    return this->l * this-> b * this->h;
}

bool Box::operator<(const Box& box) const
{
    bool isMinor = false;

    if (this->l < box.getLength())
    {
        isMinor = true;
    }
    else if ((this->b < box.getBreadth()) && (this->l == box.getLength()))
    {
        isMinor = true;
    }
    else if ( (this->h < box.getHeight())  && (this->b == box.getBreadth()) && (this->l == box.getLength()) )
    {
        isMinor = true;
    }

    return isMinor;

}

std::ostream& operator<<(std::ostream& os, Box box)
{
    os << "Box " << box.getLength() << ' ' << box.getBreadth() << ' ' << box.getHeight();
    return os;
}

