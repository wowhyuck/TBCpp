#include <iostream>
#include <cmath>
#include <stdbool.h>

using namespace std;

int main()
{
	/* 
		Precedence and Associativity
		Reference:
		https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
	*/
	int x = 4 + 2 * 3;
	int y = std::pow(2, 3);

	cout << y << endl;

	/* quiz */
	int r = 1 + 2 + 3 * 4;		// r = (1 + 2 + (3 * 4)) -> 15
	cout << r << endl;

	int a, b, c = 0;
	a = b = c;					// (a = (b = c)) -> a = 0, b = 0
	cout << a << " " << b << " " << c << endl;

	float t = 5.0f, w = 5.0f;
	t /= --w + 5.0f;			// t = 5.0f / (4.0f + 5.0f) -> t = 0.5f, w = 4
	cout << t << " " << w << endl;

	bool l = true;
	bool m = false;
	bool n = false;
	bool o = false;
	bool result = l || m && n || o;		// result = (l || (m && n)) || o = true
	cout << result << endl;

	return 0;
}