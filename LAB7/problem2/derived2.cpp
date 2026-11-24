#include<iostream>
#include "derived2.h"
using namespace std;

Derived2::Derived2(int a,int b,int val3): Derived1(a,b)
{
    c=val3;
    cout<<"Derived2 Constructor"<<endl;
}
Derived2::~Derived2(){
    cout<<"Derived2 Destructor"<<endl;
}
void Derived2::print(){
    cout<<"Base "<<a<<endl;
    cout<<"Derived1 "<<b<<endl;
      cout<<"Derived2 "<<c<<endl;
}