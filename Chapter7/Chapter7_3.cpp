#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void addOne(int& y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}

// Usually an input is placed in front and an output behind
//		   (const double& degrees)		   (double& sin_out, double& cos_out)
void getSinCos(const double& degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592 / 180.0;
	const double radians = degrees * pi;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

void foo(const int& x)
{
	cout << x << endl;
}

typedef int* pint;
void foo_ptr(pint& ptr)		// void foo_ptr(int*& ptr)
{
	cout << ptr << " " << &ptr << endl;
}

//void printElement(int(&arr)[4])
void printElement(const vector<int>& arr)
{

}


int main()
{
	//int x = 5;

	//cout << x << " " << &x << endl;

	//addOne(x);

	//cout << x << " " << &x << endl;

	/*-----------------------------------*/

	//double sin(0.0);
	//double cos(0.0);

	//getSinCos(30.0, sin, cos);

	//cout << sin << " " << cos << endl;

	/*-----------------------------------*/

	//foo(6);

	/*-----------------------------------*/

	//int x = 5;
	////int* ptr = &x;
	//pint ptr = &x;

	//cout << ptr << " " << &ptr << endl;
	//foo_ptr(ptr);

	/*-----------------------------------*/

	//int arr[]{ 1, 2, 3, 4 };
	vector<int> arr{ 1, 2, 3, 4 };

	printElement(arr);

	return 0;
}