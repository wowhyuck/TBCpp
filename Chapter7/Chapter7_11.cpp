#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack)
{
	for (auto& element : stack)
		cout << element << " ";
	cout << endl;
}


int main()
{
	//std::vector<int> v{ 1, 2, 3 };

	//// size, capacity
	//v.resize(2);

	//for (auto& element : v)
	//	cout << element << " ";
	//cout << endl;

	//cout << v.size() << " " << v.capacity() << endl;

	////cout << v.at(2) << endl;		// Error

	//int* ptr = v.data();

	//cout << ptr[2] << endl;

	//v.reserve(1024);

	//cout << v.size() << " " << v.capacity() << endl;

	/*--------------------------------------------*/

	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	return 0;
}