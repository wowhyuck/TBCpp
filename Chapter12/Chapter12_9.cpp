#include <iostream>
#include <vector>
#include <functional>

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

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print()
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base& b)
//void doSomething(Base b)		// object slicing

{
	b.print();
}


int main()
{
	Derived d;
	Base b;
	//b = d;		// object slicing

	//b.print();

	/*----------------------------*/

	//std::vector<Base*> my_vec;

	////std::vector<Base> my_vec;			// object slicing
	//my_vec.push_back(&b);
	//my_vec.push_back(&d);

	//for (auto& ele : my_vec)
	//	ele->print();

	/*-------------------------------------*/

	std::vector<std::reference_wrapper<Base>> my_vec;		// meaning == std::vector<Base&> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec)
		ele.get().print();

	return 0;
}