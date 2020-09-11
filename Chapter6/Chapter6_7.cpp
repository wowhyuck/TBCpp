#include <iostream>
#include <typeinfo>
#include <cstddef>

using namespace std;

struct Something 
{
	int a, b, c, d;
};

void doSomething(double* ptr)
{
	cout << "address of pointer variable in function " << &ptr << endl;

	if (ptr != nullptr)
	{
		// do something useful
		std::cout << *ptr << std::endl;
	}
	else
	{
		// do nothing with ptr
		std::cout << "Null ptr, do nothing" << std::endl;
	}
}


int main()
{
	int x = 5;
	double d = 1.0;

	//cout << x << endl;
	//cout << &x << endl;				// & : address-of operator
	//cout << (int)&x << endl;

	//// de-reference operator (*)
	//cout << *(&x) << endl;

	/*-----------------------------------------------------------*/

	//int* ptr_x = &x;
	//int* ptr_a = &x, * ptr_b = &x;

	//cout << ptr_x << endl;
	//cout << *ptr_x << endl;

	//double* ptr_d = &d;

	//cout << ptr_d << endl;
	//cout << *ptr_d << endl;

	/*-----------------------------------------------------------*/

	//cout << typeid(ptr_x).name() << endl;
	//cout << sizeof(x) << endl;
	//cout << sizeof(d) << endl;
	//cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	//cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

	//Something ss;
	//Something* ptr_s;

	//cout << sizeof(Something) << " " << sizeof(ptr_s) << endl;

	/* Nul pointer */

	double* ptr1 = 0;		// C-style
	double* ptr2 = NULL;	// C-style
	double* ptr3 = nullptr;	// modern C++
	if (ptr3 != nullptr)
	{
		// do something useful
	}
	else
	{
		// do nothing with ptr
	}

	doSomething(ptr3);
	doSomething(nullptr);

	doSomething(&d);

	ptr3 = &d;
	doSomething(ptr3);
	cout << "address of pointer variable in main() " << &ptr3 << endl;

	std::nullptr_t nptr;		// only null pointer

	return 0;
}