#include <iostream>
#include "Storage.h"

using namespace std;

template <typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

template <>
char getMax(char x, char y)
{
	cout << "Warning : comparing chars" << endl;

	return (x > y) ? x : y;
}

int main()
{
	cout << getMax(1, 2) << endl;
	cout << getMax('a', 'b') << endl;
	cout << endl;

	Storage<int> nvalue(5);
	Storage<double> dvalue(6.7);

	nvalue.print();
	dvalue.print();

	return 0;
}