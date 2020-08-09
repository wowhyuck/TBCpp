#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number)
{
	int n = my_number;
	cout << my_number << endl;
	cout << n << endl;
}


int main()
{
	double pi = 3.14;	// 3.14 <- literal constant

	unsigned int n = 5u;
	long n2 = 5L;
	float f = 6.0f;

	// Decimal	: 0 1 2 3 4 5 6 7 8 9 10
	// Octal	: 0 1 2 3 4 5 6 7 10 11 12
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int octal = 012;				// Octal
	int hexa = 0xF;					// Hexa
	int binary = 0b1010;			// Binary
	int b2 = 0b1011'1111'1010;
	cout << octal << " " << hexa << " " << binary << b2 << endl;
	cout << endl;

	int num_items = 123;
	int price = num_items * 10;	// 10 is magic number. 

	// It is not recommended to use magic number.
	// Therefore, magic number is chaged to symbolic constant.
	const int price_per_item = 10;
	num_items = 123;
	price = num_items * price_per_item; 
	// The reasons why symbolic constant is better than macro
	// 1. When using macro, it is hard to debug.
	// 2. The scope of macro is global.


	// 2.9: Symbolic constants
	const double gravity{ 9.8 };	// == double const gravity

	printNumber(123);

	int number;
	cin >> number;
	const int special_number(number);	// Constant is determined at runtime.
	constexpr int my_const(123);		// Constant is determined when compiling.
	// constexpr int special_number(number) is error

	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;

	return 0;
}