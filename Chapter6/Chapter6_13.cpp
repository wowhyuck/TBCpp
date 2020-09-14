#include <iostream>

using namespace std;


int main()
{
	//const int value1 = 5;
	//const int* ptr1 = &value1;
	////*ptr1 = 6;					// value1 = 6;

	//cout << *ptr1 << endl;
	//cout << endl;

	//int value2 = 5;
	//const int* ptr2 = &value2;
	////*ptr2 = 6;					
	//value2 = 6;
	//ptr2 = &value1;

	//cout << *ptr2 << endl;
	//cout << endl;

	/*--------------------------------------------*/

	int value1 = 5;
	int* const ptr1 = &value1;

	*ptr1 = 10;
	cout << *ptr1 << endl;

	int value2 = 8;
	//ptr1 = &value2;

	const int* const ptr2 = &value1;

	return 0;
}