#include <iostream>
#include <tuple>

using namespace std;

auto my_func()
{
	return tuple(123, 456, 789);
}


int main()
{
	//auto result = my_func();
	//cout << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << endl;

	auto [a, b, c] = my_func();
	cout << a << " " << b << " " << c << endl;

	return 0;
}