#include <string>
#include <cstddef>
#include <iostream>
#include <locale>


int main()
{
	// c-style string example
	{
		char* strHello = new char[7];
		strcpy_s(strHello, sizeof(char) * 7, "hello!");
		std::cout << strHello << std::endl;
	}

	// basic_string<>, string, wstring
	{
		std::string string;
		std::wstring wstring;

		wchar_t wc;		// wide-character / unicode
	}

	return 0;
}