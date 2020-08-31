#include <iostream>

namespace work1
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

namespace work3::work33::work333		// nested namespace (C++17)
{										// how to change to C++17: 
	int a = 1;							// Properties -> C/C++ -> Language -> C++ Language Standard
	void doSomething()
	{
		a += 7;
	}
}


int main()
{
	using namespace std;

	//int apple = 5;
	//cout << apple << endl;

	//{
	//	int apple = 1;
	//	cout << apple << endl;
	//}

	//cout << apple << endl;

	/*------------------------------------*/

	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();

	cout << work1::a << endl;
	cout << work2::a << endl;

	work3::work33::work333::doSomething();

	return 0;
}