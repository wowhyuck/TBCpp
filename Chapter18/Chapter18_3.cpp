#include <iostream>
#include <sstream>

using namespace std;


int main()
{
	//stringstream os;

	//os << "Hello, World!";						// << : insertion operator, >> : extraction operator
	//os << "Hellow, World!2" << endl;			// append
	//os.str("Hello, World!\n");					// assignment

	//string str;

	////os >> str;						// not allow space character
	//str = os.str();					// allow space character

	//cout << str << endl;

	/*----------------------------------------------*/

	//stringstream os;

	//os << "12345 67.89";

	//string str1;
	//string str2;

	//os >> str1 >> str2;

	//cout << str1 << " | " << str2 << endl;

	/*----------------------------------------------*/

	stringstream os;

	//int i = 12345;
	//double d = 67.89;

	//os << i << " " << d;
	os << "12345 67.89";

	int i2;
	double d2;

	os >> i2 >> d2;

	cout << i2 << " | " << d2 << endl;

	os.str("");
	os.clear();

	os << "Hello";

	cout << os.str() << endl;

	return 0;
}