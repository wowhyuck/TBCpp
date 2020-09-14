#include <iostream>

using namespace std;

void doSomething(int& n)
{
	n = 10;
	cout << "In doSomething() "<< n << endl;	
	cout << "In doSomething() " << (uintptr_t)&n << endl;

}

void printElements(const int(& arr)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};


int main()
{
	//int value = 5;

	//int* ptr = nullptr;
	//ptr = &value;

	//int& ref = value;			// reference must be initialized with a variable.
	//cout << ref << endl;

	//ref = 10;
	//cout << value << " " << ref << endl;

	//cout << (uintptr_t)&value << endl;
	//cout << (uintptr_t)&ref << endl;
	//cout << (uintptr_t)ptr << endl;
	//cout << (uintptr_t)&ptr << endl;

	/*------------------------------------------*/

	//const int x = 5;
	//const int& ref_x = x;

	/*------------------------------------------*/

	//int value1 = 5;
	//int value2 = 10;

	//int& ref1 = value1;
	//cout << ref1 << endl;

	//ref1 = value2;
	//cout << ref1 << endl;

	/*------------------------------------------*/

	//int n = 5;

	//cout << n << endl;
	//cout << (uintptr_t)&n << endl;

	//doSomething(n);

	//cout << n << endl;

	/*------------------------------------------*/

	//const int length = 5;
	//int arr[length] = { 1, 2, 3, 4, 5 };

	//printElements(arr);

	/*------------------------------------------*/

	Other ot;

	int& v1 = ot.st.v1;
	v1 = 1;

	return 0;
}