#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;

protected:
	int m_protected;

private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123;		// error
	}
};

class Grandchild : public Derived
{
public:
	Grandchild()
	{
		//Derived::m_public;
	}
};


int main()
{
	Base base;
	base.m_public = 123;
	//base.m_protected = 123;		
	//base.m_private = 123;			

	Derived derived;
	//derived.m_public = 123;		// when protected Base, error
	//derived.m_protected = 123;
	//derived.m_private = 123;

	return 0;
}