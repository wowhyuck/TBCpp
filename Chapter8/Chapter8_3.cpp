#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// Fraction() {}			// default constructor

	//Fraction()				// Constructor
	//{
	//	m_numerator = 0;
	//	m_denominator = 1;
	//}

	Fraction(const int& num_in, const int& den_in = 1)			// Constructor
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

/*---------------------------------------------------------------------*/

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	//Fraction fra;			// if paraters are not in a constructor, () must be removed.
	//fra.print();

	//Fraction one_third{ 1.0, 3 };			// tpye 변환이 불가능, 더 엄격함
	Fraction one_third(1, 3);
	one_third.print();
	cout << endl;

	/*----------------------------------------------------------------------------------*/

	First fir;

	return 0;
}