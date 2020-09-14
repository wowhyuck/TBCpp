#include <iostream>
#include <vector>

using namespace std;


int main()
{
	//std::array<int, 5> arr;				// static memory allocation
	std::vector<int> arr;					// dynamic memory allocation
	// advantage of vector: need not delete statement.

	std::vector<int> arr2 = { 1, 2, 3, 4, 5 };
	cout << arr2.size() << endl;

	std::vector<int> arr3 = { 1, 2, 3, };
	cout << arr3.size() << endl;

	std::vector<int> arr4 { 1, 2, 3, };
	cout << arr4.size() << endl;

	for (auto& itr : arr2)
		cout << itr << " ";
	cout << endl;

	cout << arr2[1] << endl;
	cout << arr2.at(1) << endl;

	arr2.resize(10);
	cout << arr2.size() << endl;

	return 0;
}

