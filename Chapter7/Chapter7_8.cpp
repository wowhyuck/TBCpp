#include <iostream>
#include <string>

using namespace std;

void print(int x = 10, int y = 20, int z = 30);		// in header

void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}

void print_s(std::string str) {};
void print_s(char ch = ' ') {};



int main()
{
	print();
	print(100);
	print(100, 200);
	print(100, 200, 300);

	/*-----------------------------------------*/

	print_s();		// print_s(char ch = ' ') is implemented

	return 0;
}
