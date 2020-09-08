#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; index++)
		cout << array[index] << " " << endl;
}


int main()
{
	/*			value	index
	3 5 2 1 4	  1		  3
	1 5 2 3 4	  2		  2
	1 2 5 3 4	  3		  3
	1 2 3 5 4	  4		  4
	1 2 3 4 5
	*/

	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array, length);
	cout << endl;

	for (int i = 0; i < length - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < length; j++)
		{
			if (array[min_index] > array[j])
				min_index = j;
		}
		if (array[min_index] != array[i])
			std::swap(array[i], array[min_index]);
	}
	printArray(array, length);

	return 0;
}