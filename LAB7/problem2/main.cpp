#include "derived2.h"
#include<iostream>
using namespace std;

int main(){
	    Derived1 d1(2,4);
	    Derived2 d2(10, 20, 30);
d2.print();				//The function shall print the values.

return 0;
}