#include <iostream>
#include <string>

using namespace std;


int main()
{
	// Assignment
	//string str1("one");

	//string str2;
	//str2 = str1;
	//str2 = "two";
	//str2.assign("two").append(" ").append("three");

	//cout << str2 << endl;

	/*------------------------------------------*/

	// Swap
	//string str1("one");
	//string str2("two");

	//cout << str1 << " " << str2 << endl;

	//std::swap(str1, str2);

	//cout << str1 << " " << str2 << endl;

	//str1.swap(str2);

	//cout << str1 << " " << str2 << endl;

	/*------------------------------------------*/

	// Append
	string str1("one");
	string str2("two");

	str1.append("three");
	str1.push_back('a');			// no string
	str1 += "three";

	str1 = str2 + "four";

	/*------------------------------------------*/

	// Insert
	string str("aaaa");

	str.insert(2, "bbb");

	cout << str << endl;

	return 0;
}