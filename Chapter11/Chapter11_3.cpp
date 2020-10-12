#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int& i_in = 0)
		:m_i(i_in)
	{
		cout << "Mother constructor " << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		: Mother(1024), m_d(1.0)
	{
		cout << "Child constructor " << endl;
	}
};

class A
{
public:
	A(int a)
	{
		cout << "A constructor" << endl;
		cout << "A: " << a << endl;
	}

	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "B constructor" << endl;
		cout << "B: " << b << endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}

};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C constructor" << endl;
		cout << "C: " << c << endl;
	}

	~C()
	{
		cout << "Destructor C" << endl;
	}

};


int main()
{
	Child c1;
	cout << endl;

	//C c;

	/* 11. 4 */

	cout << sizeof(Mother) << endl;
	cout << sizeof(Child) << endl;

	C c(1024, 3.14, 'a');

	return 0;
}