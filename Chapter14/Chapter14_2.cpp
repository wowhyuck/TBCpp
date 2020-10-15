#include <iostream>

using namespace std;

// void last() throw(int) exception specifier
// void last() throw(...) exception specifier


void last()
{
	cout << "Last" << endl;
	cout << "Throws exception" << endl;

	throw - 1;

	cout << "End last" << endl;
}

void third()
{
	cout << "Third" << endl;

	cout << "Third" << endl;

	last();

	cout << "End third" << endl;
}


void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		cerr << "Second caught double exception" << endl;
	}

	cout << "End second" << endl;
}

void first()
{
	cout << "First" << endl;

	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}

	cout << "End first" << endl;
}


int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int)
	{
		cerr << "main caugt int exception" << endl;
	}

	// uncaught exceptions
	catch (...)		// catch-all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "End main" << endl;

	return 0;
}