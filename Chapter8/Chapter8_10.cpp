#include <iostream>

using namespace std;

class Something
{
public:
	static int s_value;						// when static, it cannot be initialized.
	//static const int s_value = 1;			// when const
	//static constexptr int s_value = 1;	// when const
};

int Something::s_value = 1;		// define in cpp


int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}