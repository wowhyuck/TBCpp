#include "MyArray.h"

int main()
{
	MyArray<double> my_array(10);

	for (int i = 0; i < my_array.getLength(); i++)
		my_array[i] = i * 0.5;

	my_array.print();

	return 0;
}