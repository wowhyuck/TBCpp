#include <iostream>

using namespace std;

int getResult()
{
	return 100 * 100;
}

void doSomething(int& lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int&& rref)
{
	cout << "R-value ref" << endl;
}


int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();

	// L-value reference

	int& lr1 = x;				// Modifiable l-values
	//int& lr2 = cx;			// Non-modifiable l-values
	//int& lr3 = 5;				// R-values

	const int& lr4 = x;			// Modifiable l-values
	const int& lr5 = cx;		// Non-modifiable l-values
	const int& lr6 = 5;			// R-values

	// R-value reference

	//int&& rr1 = x;			// Modifiable l-values
	//int&& rr2 = cx;			// Non-modifiable l-values
	int&& rr3 = 5;				// R-values

	//const int&& rr4 = x;		// Modifiable l-values
	//const int&& rr5 = cx;		// Non-modifiable l-values
	const int&& rr6 = 5;		// R-values

	// L/R-value reference parameters
	doSomething(x);
	//doSomething(cx);
	doSomething(5);
	doSomething(getResult());

	return 0;
}