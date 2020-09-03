#include <iostream>
#include "MyConstants.h"

extern int ex_value = 456;


void doHello()
{
	using namespace std;

	cout << "Hello" << endl;

	cout << "In test.cpp file " << Constants::pi << " " << &Constants::pi << endl;

}
