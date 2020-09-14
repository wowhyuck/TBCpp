#include <iostream>

using namespace std;

void doSomething(int& x)
{
	cout << x << endl;
}

void doSomething_const(const int& x)
{
	cout << x << endl;
}


int main()
{
	const int x = 5;
	const int& ref_x = x;

	cout << ref_x << endl;
	cout << &ref_x << endl;

	int y = 7;

	doSomething(y);
	doSomething_const(y + 1);

	return 0;
}