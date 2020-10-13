#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};


int main()
{
	Derived1 d1;
	d1.m_j = 2048;

	// ...

	Base* base = &d1;

	auto* base_to_d1 = dynamic_cast<Derived1*>(base);

	if (base_to_d1 != nullptr)
		cout << base_to_d1->m_j << endl;
	else
		cout << "Failed" << endl;

	base_to_d1->m_j = 256;

	cout << d1.m_j << endl;

	return 0;
}