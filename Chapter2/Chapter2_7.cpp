
#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A');

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	//cout << endl;

	//// c-style casting
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;
	//cout << endl;

	//// cpp-style casting
	//cout << char(65) << endl;
	//cout << int('A') << endl;
	//cout << endl;

	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;
	//cout << endl;

	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;
	//cout << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//cout << endl;

	//cout << sizeof(char) << endl;
	//cout << (int)std::numeric_limits<char>::max() << endl;
	//cout << (int)std::numeric_limits<char>::lowest() << endl;
	//cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	//cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;
	//cout << endl;

	cout << int('\n') << endl;
	cout << "This is first line \nsecond line";
	cout << "This is first line " << endl;
	cout << "second line" << endl;

	char32_t c3;

	return 0;
}


