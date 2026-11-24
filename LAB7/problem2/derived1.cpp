#include<iostream>
#include "derived1.h"
using namespace std;

Derived1::Derived1(int val1,int val2):Base(val1)
{
    b=val2;
    cout<<"Derived1 Constructor"<<endl;
}
Derived1::~Derived1(){
    cout<<"Derived1 Destructor"<<endl;
}
