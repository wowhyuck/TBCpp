#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	using namespace std;

	// numeric promotion
	float a = 123.0f;
	double b = a;	
	cout << typeid(a).name() << endl;

	// numeric conversion
	int i = 30000;
	char c = i;
	cout << static_cast<int>(c) << endl;

	double d = 0.123456789;
	float f = d;
	cout << std::setprecision(12) << f << endl;

	cout << 5u - 10 << endl;
	// int, unsigned int, long, unsigned long,
	// long long, unsigned long long, float, double
	// unsigned double

	int x = int(4.0);			// C++ style
	int y = (int)4.0;			// C style
	int z = static_cast<int>(4.0);

	return 0;
}