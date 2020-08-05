#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>


int main()
{
	using namespace std;
	
	float f;
	double d;
	long double ld;

	// sizeof()
	cout << "Size of float is " << sizeof(f) << " bytes." << endl;
	cout << "Size of double is " << sizeof(d) << " bytes." << endl;
	cout << "Size of long double is " << sizeof(ld) << " bytes." << endl;
	cout << endl;

	// numeric_limits<type>::max(), min(), lowest()
	// max(): maximum value, min(): minimum value, lowest(): the smallest value in the absolute value
	// #include <limits>
	cout << "A maximum number of float is " << numeric_limits<float>::max() << endl;
	cout << "A maximum number of double is " << numeric_limits<double>::max() << endl;
	cout << "A maximum number of long double is " << numeric_limits<long double>::max() << endl;
	cout << endl;

	// setprecision(n)	n: the number of numbers to express
	// #include <iomanip>
	// A default of n is 6.
	f = 123456789.0f;		// 10 significant digits

	cout << std::setprecision(9);
	cout << 1.0 / 3.0 << endl;
	cout << f << endl;		// error can occur. A computer prints 123456792
	cout << endl;

	// isnan() and isinf(), check inf and nan
	// #include <cmath>
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << "posinf is " << posinf << " and " << "isnan is " << std::isnan(posinf) << endl;
	cout << "posinf is " << posinf << " and " << "isinf is " << std::isinf(posinf) << endl;
	cout << "neginf is " << neginf << " and " << "isnan is " << std::isnan(neginf) << endl;
	cout << "neginf is " << neginf << " and " << "isinf is " << std::isinf(neginf) << endl;
	cout << "nan is " << nan << " and " << "isnan is " << std::isnan(nan) << endl;

	return 0;
}

