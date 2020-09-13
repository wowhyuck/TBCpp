#include <iostream>

using namespace std;


int main()
{
	//int value = 7;
	//int* ptr = &value;

	//cout << uintptr_t(ptr - 1) << endl;
	//cout << uintptr_t(ptr) << endl;
	//cout << uintptr_t(ptr + 1) << endl;
	//cout << uintptr_t(ptr + 2) << endl;
	//cout << endl;

	/*---------------------------------------*/

	//int array[] = { 9, 7, 5, 3, 1 };
	//int* ptr = array;

	//for (int i = 0; i < 5; i++)
	//{
	//	//cout << array[i] << " " << uintptr_t(&array[i]) << endl;
	//	cout << *(ptr + i) << " " << uintptr_t(ptr + i) << endl;
	//}

	/*---------------------------------------*/

	char name[] = "Jack Jack";

	const int size_name = sizeof(name) / sizeof(char);

	char* ptr = name;

	for (int i = 0; i < size_name; i++)
	{
		//cout << *(name + i);
		cout << *(ptr + i);
	}


	return 0;
}