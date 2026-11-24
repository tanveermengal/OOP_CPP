#ifndef derived1_h
#define derived1_h
#include "base.h"
#include <iostream>
using namespace std;
class Derived1 : public Base
{
    protected:
int b{};
public:
    Derived1(int,int);
    ~Derived1();
 

};

#endif