#include <iostream>
#include "MyConstants.h"

using namespace std;

int value = 123;				// It is recommended not to use unless necessary.
								// If it is used, it is given a distinguished name like g_value.

void doSomething()
{
	static int a = 1;			// Initialization must be implemented at first.
	a++;
	cout << a << endl;
}

static int st_value = 10;

// forward declaration
void doHello();					// == extern void doHello();

extern int ex_value;


int main()
{
	/* Global variable */
	//cout << value << endl;

	//int value = 1;

	//cout << value << endl;			// local variable
	//cout << ::value << endl;		// global variable
	//cout << endl;

	///* Static variable */
	//doSomething();
	//doSomething();

	/* External linkage */

	cout << "In Chapter4_2.cpp file "<< Constants::pi << " " << &Constants::pi << endl;
	doHello();

	return 0;
}

