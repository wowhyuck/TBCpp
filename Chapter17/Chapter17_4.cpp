#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	string my_str("abcdefg");

	cout << my_str[0] << endl;
	cout << my_str[3] << endl;

	my_str[3] = 'Z';

	cout << my_str << endl;

	//try
	//{
	//	//my_str[100] = 'X';
	//	my_str.at(100) = 'X';
	//}
	//catch (std::exception& e)
	//{
	//	cout << e.what() << endl;
	//}

	/*-------------------------------------------*/

	cout << my_str.c_str() << endl;

	const char* arr = my_str.c_str();
	const char* arr1 = my_str.data();		// == my_str.c_str()

	cout << (int)arr[6] << endl;
	cout << (int)arr[7] << endl;

	char buf[20];
	my_str.copy(buf, 5, 0);
	buf[5] = '\0';

	cout << buf << endl;


	return 0;
}