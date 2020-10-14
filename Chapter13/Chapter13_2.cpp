#include "MyArray.h"

int main()
{
	/* 13.2*/
	//MyArray<double> my_array(10);

	//for (int i = 0; i < my_array.getLength(); i++)
	//	my_array[i] = i * 0.5;

	//my_array.print();

	/*--------------------------------------------------*/

	/* 13.3*/
	MyArray<double, 100> my_array;

	for (int i = 0; i < my_array.getLength(); i++)
		my_array[i] = i * 0.5;

	my_array.print();

	return 0;
}