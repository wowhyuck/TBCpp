#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};


int main()
{
	Person person;

	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;
	
	Person* ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref.age = 45;

	cout << (uintptr_t)&person << endl;
	cout << (uintptr_t)&ref2 << endl;

	return 0;
}