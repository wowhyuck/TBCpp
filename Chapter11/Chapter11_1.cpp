#include <iostream>

using namespace std;

class Mother
{
//private:
protected:
	int m_i;

public:
	Mother(const int& i_in)
		: m_i(i_in)
	{
		std::cout << "Mother constructor" << std::endl;
	}

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother		// derived class
{
private:
	double m_d;

public:
	Child(const int& i_in, const double& d_in)
		: Mother(i_in), m_d(d_in)
	{
		Mother::setValue(i_in);
		m_d = d_in;
	}

	void setValue(const int& i_in, const double& d_in)
	{
		m_i = i_in;
		//Mother::setValue(i_in);			// when access specifier is private in mother class
		m_d = d_in;
	}

	void setValue(const double& d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

class Daughter : public Mother
{

};

class Son : public Mother
{

};


int main()
{
	Mother mother(0);
	mother.setValue(1024);
	cout << mother.getValue() << endl;
	
	Child child(1000, 128);
	child.setValue(128);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

	return 0;
}