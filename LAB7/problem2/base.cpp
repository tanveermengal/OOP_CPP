#include<iostream>
#include "base.h"
using namespace std;

Base::Base(int val){
    a=val;
    cout<<"Base Constructor"<<endl;
}
Base::~Base(){
    cout<<"Base Destructor"<<endl;
}
