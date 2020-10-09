#include <iostream>

using namespace std;

class Something
{
public:
	class _init								// static members are initialized througn an inner class.
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	Something()
		: m_value(123)						// static members cannot be initialized in a constructor.
	{}

	static int getValue()
	{
		return s_value;
		//return this->s_value;				// cannot use anything related to this
		//return m_value;
	}

	int temp()
	{
		return this->s_value;
	}
};

//int Something::s_value = 1024;
Something::_init Something::s_initializer;


int main()
{
	cout << Something::getValue() << endl;

	Something s1;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	int (Something:: * fptr1)() = &Something::temp;

	cout << (s1.*fptr1)() << endl;

	int (* fptr2)() = &Something::getValue;

	cout << fptr2() << endl;

	return 0;
}