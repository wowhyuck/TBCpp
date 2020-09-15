#include <iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

typedef int my_int;

void print(int x) {}
//void print(my_int x) {}		// compile error because of (int x == my_int x)


int main()
{
	add(1, 2);
	add(3.0, 4.0);

	return 0;
}