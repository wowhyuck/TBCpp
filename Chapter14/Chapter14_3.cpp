#include <iostream>

using namespace std;

class Exception
{
public:
	void report()
	{
		cerr << "Exception report" << endl;
	}
};

class ArrayException : public Exception
{
public:
	void report()
	{
		cerr << "Array exception" << endl;
	}
};

class MyArray
{
private:
	int m_data[5];

public:
	int& operator[] (const int& index)
	{
		//if (index < 0 || index >= 5) throw - 1;
		//if (index < 0 || index >= 5) throw Exception();
		if (index < 0 || index >= 5) throw ArrayException();

		return m_data[index];
	}
};

void doSomething()
{
	MyArray my_array;

	try
	{
		my_array[100];
	}
	catch (const int& x)
	{
		cerr << "Exception " << x << endl;
	}
	//catch (ArrayException& e)
	//{
	//	cout << "doSomething()" << endl;
	//	e.report();
	//	throw e;
	//}
	catch (Exception& e)
	{
		cout << "doSomething()" << endl;
		e.report();
		//throw e;
		throw;
	}
}


int main()
{
	try
	{
		doSomething();
	}
	catch (ArrayException& e)
	{
		cout << "main()" << endl;
		e.report();
	}
	catch (Exception& e)
	{
		cout << "main()" << endl;
		e.report();
	}

	return 0;
}