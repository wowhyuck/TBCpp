#include <iostream>



int main()
{
	using namespace std;

	/* logical NOT ! */
	//bool x = true;
	//cout << !x << endl;

	/* logical AND and OR */
	//bool a = true;
	//bool b = false;
	//cout << (a && b) << endl;
	//cout << (a || b) << endl;

	/* short circuit evaluation */
	//int x = 1;
	//int y = 2;
	//if (x == 1 && y++ == 2)		// The left statement is first evaluated. 
	//{							// And then, the right statement is evaluated.
	//	// do something			// if '&&' operator is present and the left stataement is false,
	//}							// the right statement is not implemented.
	//cout << y << endl;

	/* De Morgan's Law */
	//int x = true;
	//int y = false;

	//!(x && y);		// -> !x || !y
	//!(x || y);		// -> !x && !y

	/* XOR */
	// false false	->	false
	// false true	->	true
	// true false	->	true
	// true true	->	false
	// XOR is not in C++, so it is implemented as follows:
	//int x = true;
	//int y = false;
	//if (x != y)
	//{

	//}

	/* Problems */
	//cout << ((true && true) || false) << endl;				// true
	//cout << ((false && true) || true) << endl;				// true
	//cout << ((false && true) || false || true) << endl;		// true
	//cout << ((14 > 13) || 2 > 1) << endl;					// true
	//cout << (!(2314123 > 2) || 123123 > 2387) << endl;		// true

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;		// == r3
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);

	cout << r1 << endl;
	cout << r2 << endl;

	return 0;
}