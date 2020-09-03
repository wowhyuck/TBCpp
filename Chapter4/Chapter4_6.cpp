#include <iostream>
#include <string>
#include <limits>

using namespace std;


int main()
{
	//const char my_strs[] = "Hello, World";
	//const string my_hello = "Hello, World";

	//cout << my_hello << endl;

	/*-----------------------------------------------------------*/

	//cout << "Your age : ";
	//int age;
	//cin >> age;
	////std::getline(std::cin, age);

	////std::cin.ignore(32767, '\n');
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	//cout << "Your name : ";
	//string name;
	////cin >> name;
	//std::getline(std::cin, name);

	//cout << name << " " << age << endl;

	/*-----------------------------------------------------------*/

	string a("Hello, ");
	string b("World. ");
	string hw = a + b;		// append

	hw += "I'm good.";

	cout << hw << endl;
	cout << hw.length() << endl;		// string length

	return 0;
}