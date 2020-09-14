#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack Jack";
}


int main()
{
	//char name[] = "Jack Jack";
	//char* name = "Jack Jack";		// Error: "Jack Jack" is literal, not memory of address and variable
	
	//const char* name = "Jack Jack";
	//const char* name2 = "Jack Jack";
	//const char* name3 = getName();


	//cout << name << endl;
	//cout << uintptr_t(name) << endl;
	//cout << uintptr_t(name2) << endl;
	//cout << uintptr_t(name3) << endl;

	/*-------------------------------------*/

	//int int_arr[5] = { 1, 2, 3, 4, 5 };
	//char char_arr[] = "Hello, World!";
	//const char* name = "Jack Jack";

	//cout << int_arr << endl;			// output: address
	//cout << char_arr << endl;			// output: string
	//cout << name << endl;				// output: string

	/*-------------------------------------*/

	char c = 'Q';
	cout << &c << endl;		// A wrong output

	return 0;
}