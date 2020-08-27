#include <iostream>
#include <bitset>


int main()
{
	using namespace std;

	//// << : left shift
	//unsigned int a = 3;
	//cout << std::bitset<8>(a) << " " << a << endl;

	//cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	//cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	//cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	//cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
	//cout << endl;

	//// >> : right shift
	//unsigned int b = 1024;
	//cout << std::bitset<16>(b) << " " << b << endl;

	//cout << std::bitset<16>(b >> 1) << " " << (b >> 1) << endl;
	//cout << std::bitset<16>(b >> 2) << " " << (b >> 2) << endl;
	//cout << std::bitset<16>(b >> 3) << " " << (b >> 3) << endl;
	//cout << std::bitset<16>(b >> 4) << " " << (b >> 4) << endl;
	//cout << endl;

	//// ~ : bitwise NOT
	//unsigned int c = 1024;
	//cout << std::bitset<16>(c) << " " << c << endl;
	//cout << std::bitset<16>(~c) << " " << (~c) << endl;			// ! = Logical NOT

	//// bitwise AND, OR, XOR
	//unsigned int x = 0b1100;
	//unsigned int y = 0b0110;
	//cout << std::bitset<4>(x & y) << endl;		// bitwise AND
	//cout << std::bitset<4>(x | y) << endl;		// bitwise OR
	//cout << std::bitset<4>(x ^ y) << endl;		// bitwise XOR

	//x &= y;

	// Quiz

	// 0110 >> 2 -> decimal
	//unsigned int a = 0b0110;
	//cout << std::bitset<4>(a >> 2) << " " << (a >> 2) << endl;

	// 5 | 12, 5 & 12, 5 ^ 12
	unsigned int a = 5;
	unsigned int b = 12;
	cout << std::bitset<4>(a | b) << " " << (a | b) << endl;
	cout << std::bitset<4>(a & b) << " " << (a & b) << endl;
	cout << std::bitset<4>(a ^ b) << " " << (a ^ b) << endl;

	return 0;
}