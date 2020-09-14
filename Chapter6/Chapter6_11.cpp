#include <iostream>

using namespace std;


int main()
{
	//int* ptr = new int(7);
	////int* ptr = new (std::nothrow) int(7);		// Although memory is not allocated, the program runs. 

	//cout << uintptr_t(ptr) << endl;
	//cout << *ptr << endl;

	//delete ptr;
	//ptr = nullptr;				// = 0; = NULL;

	//cout << "After delete" << endl;
	//if (ptr != nullptr)
	//{
	//	cout << uintptr_t(ptr) << endl;
	//	cout << *ptr << endl;
	//}

	/*-------------------------------------------------*/

	/* memory leak */
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr;				// if this statement is not present, memory leakage occurs. 
	}

	return 0;
}