#include <iostream>

// template

auto add(int x, int y) -> int		// trailing return type
{
	return x + y;
}

int main()
{
	using namespace std;

	auto a = 123;				// Initialization must be implemented.
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}