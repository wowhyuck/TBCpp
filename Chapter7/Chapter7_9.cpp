#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}


typedef bool(*check_func_t)(const int&);
//using check_func_t = bool(*)(const int&);

void printNumber(const array<int, 10>& my_array, check_func_t check_func)
{
	for (auto element : my_array)
	{
		if (check_func(element) == true)
			cout << element;
	}
	cout << endl;
}

void printNumber(const array<int, 10>& my_array, 
	std::function<bool(const int&)> check_func)
{
	for (auto element : my_array)
	{
		if (check_func(element) == true)
			cout << element;
	}
	cout << endl;
}


int main()
{
	//int(*func_ptr)() = func;

	//cout << func_ptr() << endl;

	//func_ptr = goo;

	//cout << func_ptr() << endl;

	/*-----------------------------------*/

	array<int, 10> my_array{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printNumber(my_array, isEven);
	printNumber(my_array, isOdd);

	std::function<bool(const int&)> func_ptr = isEven;
	printNumber(my_array, func_ptr);

	func_ptr = isOdd;
	printNumber(my_array, isOdd);


	return 0;
}