#include <iostream>
using namespace std;

class A
{
public:
	void print() { cout << "A" << endl; }
	virtual A* getThis() 
	{ 
		cout << "A::getThis()" << endl;
		return this; 
	}
};

class B : public A
{
public:
	//virtual print(int x) overried { cout << "B" << endl; }
	//void print() final { cout << "B" << endl; }

	void print() { cout << "B" << endl; }
	virtual B* getThis()
	{ 
		cout << "B::getThis()" << endl;
		return this; 
	}
};

class C : public B
{
public:
	//virtual void print() { cout << "C" << endl; }
};


int main()
{
	A a;
	B b;

	A& ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	return 0;
}