#include "AutoPtr.h"
#include "Resource.h"
#include "Timer.h"
#include <vector>

using namespace std;

template <typename T>
void MySwap(T& a, T& b)
{
	//T temp = a;
	//a = b;
	//b = temp;

	T temp{ std::move(a) };
	a = std::move(b);
	b = std::move(temp);
}


int main()
{
	//{
	//	AutoPtr<Resource> res1(new Resource(1000000));

	//	cout << res1.m_ptr << endl;

	//	AutoPtr<Resource>res2 = std::move(res1);

	//	cout << res1.m_ptr << endl;
	//	cout << res2.m_ptr << endl;
	//}

	//{
	//	AutoPtr<Resource> res1(new Resource(3));
	//	res1->setAll(3);

	//	AutoPtr<Resource> res2(new Resource(5));
	//	res2->setAll(5);

	//	MySwap(res1, res2);

	//	res1->print();
	//	res2->print();
	//}

	//{
	//	vector<string> v;
	//	string str = "Hello";
	//	
	//	v.push_back(str);

	//	cout << str << endl;
	//	cout << v[0] << endl;

	//	v.push_back(std::move(str));

	//	cout << str << endl;
	//	cout << v[0] << " " << v[1] << endl;
	//}

	{
		std::string x{ "abc" };
		std::string y{ "de" };

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;

		MySwap(x, y);

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}

	return 0;
}