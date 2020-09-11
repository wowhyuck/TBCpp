#include <iostream>

using namespace std;

//void printArray(int array[])
void printArray(int* array)
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	*array = 100;
}

struct MyStruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
};

void doSomething(MyStruct* ms)
{
	cout << sizeof(ms->array) << endl;
}



int main()
{
	int array[5] = { 9, 7, 5, 3, 1 };

	//cout << array[0] << " " << array[1] << endl;
	//cout << array << endl;				// array is a pointer.
	//cout << &(array[0]) << endl;

	//cout << *(array) << endl;

	//int* ptr = array;
	//cout << ptr << endl;
	//cout << *ptr << endl;

	//char name[] = "jackjack";
	//cout << *name << endl;

	/*---------------------------------------------------*/

	cout << sizeof(array) << endl;

	int* ptr = array;

	cout << sizeof(ptr) << endl;

	printArray(array);

	cout << array[0] << endl;

	cout << *ptr << " " << *(ptr + 1) << endl;

	/*---------------------------------------------------*/

	MyStruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;
	doSomething(&ms);

	return 0;
}
