#include <iostream>
#include <vector>
#include <utility>			// std::forward

using namespace std;

struct MyStruct
{

};

void func(MyStruct& s)
{
	cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s)
{
	cout << "Pass by R-ref" << endl;
}

//void func(MyStruct s)
//{
//	cout << "Pass by Value" << endl;
//}

//template<typename T>
//void func_wrapper(T t)				// wrong
//{
//	func(t);
//}

template<typename T>
void func_wrapper(T&& t)
{
	func(std::forward<T>(t));
}


int main()
{
	MyStruct s;

	//func(s);
	//func(MyStruct());

	func_wrapper(s);
	func_wrapper(MyStruct());

	return 0;
}