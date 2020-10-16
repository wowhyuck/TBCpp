#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization

void doSomething()
{
	try
	{
		//Resource* res = new Resource;				// dull pointer
		AutoPtr<Resource> res(new Resource);		// smart pointer

		// work with res

		if (true)
		{
			throw - 1;	//exception
		}

		//delete res;
	}
	catch (...)
	{

	}

	return;
}


int main()
{
	//doSomething();

	/*----------------------------*/

	{
		AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;				// move semantics

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}

	// value semantics (copy semantics)
	// reference semantics (pointer)
	// move semantics (move)

	return 0;
}