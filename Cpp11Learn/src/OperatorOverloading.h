//
// Created by Alessio Saltarin on 30/03/16.
//

#ifndef CPP11LEARN_OPERATOROVERLOADING_H
#define CPP11LEARN_OPERATOROVERLOADING_H

#include <ostream>
#include <vector>
#include <string>

class Box
{

protected:
    int l;
    int b;
    int h;

public:
    Box();
    Box(int, int, int);
    Box(const Box&);
    virtual ~Box();
    int getLength() const { return this->l; } ;
    int getBreadth() const { return this->b; } ;
    int getHeight() const { return this->h; };
    long long CalculateVolume() const;

    // Overload < (is minor than)
    bool operator<(const Box& box) const;

    // Overload << (to stream)
    friend std::ostream& operator<<(std::ostream& os, Box box);
};


#endif //CPP11LEARN_OPERATOROVERLOADING_H
