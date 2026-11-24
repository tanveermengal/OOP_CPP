#ifndef derived2_h
#define derived2_h
#include "derived1.h"
#include <iostream>
using namespace std;
class Derived2:public Derived1
{
    protected:
int c{};
public:
    Derived2(int,int,int);
    ~Derived2();
    void print();


};

#endif