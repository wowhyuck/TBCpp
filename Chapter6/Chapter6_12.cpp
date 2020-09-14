#include <iostream>

using namespace std;


int main()
{
	//int length;
	//cin >> length;

	////int array[length];
	//int* array = new int[length];
	////int* array = new int[length]();				// Initialization
	////int* array = new int[length]{ 1, 2, 3 };		// Initialization

	//array[0] = 1;
	//array[1] = 2;

	//for (int i = 0; i < length; i++)
	//{
	//	cout << (uintptr_t)&array[i] << endl;
	//	cout << array[i] << endl;
	//}

	//delete[] array;

	/*----------------------------------------------*/

	int fixedArray[] = { 1, 2, 3, 4, 5 };

	int* array = new int[3] { 1, 2, 3 };

	delete[] array;

	return 0;
}