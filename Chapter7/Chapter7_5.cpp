#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* allocateMemory(int size)
{
	return new int[size];
}

int& getReference(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_s{ 1, 2, 3, 4 };
	return my_s;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}


int main()
{
	/* return by value */
	//int value = getValue(3);

	/* return by address */
	//int* array = allocateMemory(1024);

	/* return by reference */
	//std::array<int, 100> my_array;
	//my_array[30] = 10;
	//getReference(my_array, 30) = 1024;
	//cout << my_array[30] << endl;

	/* return by struct */
	//S my_s = getStruct();
	//cout << my_s.a << endl;

	/* use tuple */
	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl;			// std::get<0>(my_tp) = a
	//cout << std::get<1>(my_tp) << endl;			// std::get<1>(my_tp) = d

	// C++17 (use tuple)
	auto [a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;

	//delete[] array;
	return 0;
}