#include <iostream>
#include <cmath>


int main()
{
	using namespace std;
	/* 3.5: sizeof, comma operator, and conditional operator */
	// sizeof
	float a;

	cout << sizeof(float) << endl;			// sizeof() is an operator
	cout << sizeof(a) << endl;
	cout << sizeof a << endl;

	// comma operator
	int x = 3;
	int y = 10;

	//int z = (++x, ++y);		// comma operator			
	++x;						// These 3 statements are equal to the above statement using a comma operator.
	++y;
	int z = y;

	cout << x << " " << y << " " << z << endl;

	// conditional operator (arithmetric if)
	bool onSale = true;
	const int price = (onSale == true) ? 10 : 100;

	// If you use 'if' statement, you cannot use 'const' variable.
	// Therefore, conditional operator is used when value is returned to const variable.
	//if (onSale)			
	//	price = 10;			
	//else
	//	price = 100;

	cout << price << endl;


	/* 3.6: Relational operators */
	// a point of caution
	double d1(100 - 99.99);		// 0.001
	double d2(10 - 9.99);		// 0.001
	// d1 and d2 are different because of floating point numbers.

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;


	return 0;
}