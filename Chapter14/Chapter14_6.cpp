#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	~A()
	{
		//throw "error";		//  Cannot throw exception in destructor !!!
	}
};


int main()
{
	try
	{
		int* i = new int[1000000];
		unique_ptr<int> up_i(i);

		// do something with i

		throw "error";
		
		//delete[] i;

		/*--------------------------------*/

		//A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}