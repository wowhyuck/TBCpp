#include <iostream>

using namespace std;

// void pointer, generic pointer


int main()
{
	int		i = 5;
	float	f = 3.0;
	char	c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	int* ptr_i = &i;

	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;
	//cout << ptr + 1 << endl;			// Error: void pointer cannot 
	cout << (uintptr_t)&f << " " << (uintptr_t)ptr << endl;
	//cout << *ptr << endl;				// Error: void pointer cannot
	cout << *static_cast<float*>(ptr) << endl;		// need to cast type

	return 0;
}