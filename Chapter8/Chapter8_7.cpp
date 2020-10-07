#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		setID(id);					// == this->setID(id)

		cout << this << endl;		// this: one's own address
	}

	void setID(int id) { m_id = id; }
	int  getID() { return m_id; }

};

/*-------------------------------------------------------------------------*/

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};


int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);					
	s2.setID(4);					// Simple::setID(&s2, 4); == s2.setID(4);

	cout << &s1 << " " << &s2 << endl;
	cout << endl;

	/*-------------------------------------------------------------------------*/

	Calc cal(10);
	//cal.add(10);
	//cal.sub(1);
	//cal.mult(2);
	//cal.print();

	cal.add(10).sub(1).mult(2).print();
	// ==
	//Calc& temp1 = cal.add(10);
	//Calc& temp2 = cal.sub(1);
	//Calc& temp3 = cal.mult(2);
	//temp3.print();

	return 0;
}