#include "derived1.h"
#include <iostream>
using namespace std;

class Derived2 :public Derived1
{
    int inpD2{};
    public:
    Derived2();
    ~Derived2();
};

