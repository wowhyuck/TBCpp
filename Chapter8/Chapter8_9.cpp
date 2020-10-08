#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	int m_value = 0;
	string m_str = "default";

	Something(const Something& st_in)			// copy constructor
	{
		m_value = st_in.m_value;

		cout << "Copy constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }

	int getValue() const			// member function is const.
	{ 
		return m_value;
	}

	const string& getString() const 
	{ 
		cout << "const version" << endl;
		return m_str; 
	}

	string& getString() 
	{ 
		cout << "non-const version" << endl;
		return m_str; 
	}
};

/*----------------------------------------------------------------*/

void print(Something st)
//void print(const Something& st)		// using reference, it is optimized.
{
	cout << &st << endl;

	cout << st.getValue() << endl;
}

/*----------------------------------------------------------------*/


int main()
{
	//const Something something;
	//something.setValue(3);

	// if member function is const, this statement will be implemented.
	//cout << something.getValue() << endl;		

	/*----------------------------------------------------------------*/

	//Something something;

	//cout << &something << endl;

	//print(something);

	/*----------------------------------------------------------------*/

	Something something;
	something.getString();

	const Something something2;
	something2.getString();

	return 0;
}