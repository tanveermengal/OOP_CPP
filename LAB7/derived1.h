#include "base.h"
#include <iostream>
using namespace std;

class Derived1 :public Base
{
    int inpD1{};
    public:
    Derived1();
    ~Derived1();
};