#include <iostream>
#include <cassert>		// assert.h
#include <array>

using namespace std;

void printValue(std::array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);

	cout << my_array[ix] << endl;
}


int main()
{
	int number = 5;

	// ...

	assert(number == 5);

	std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };

	printValue(my_array, 100);

	/*-------------------------------------------*/

	const int a = 5;

	//assert(a == 5);						// run-time
	
	static_assert(a == 5, "a should be 5");	// when compiling and a variable must be a constant.

	return 0;
}