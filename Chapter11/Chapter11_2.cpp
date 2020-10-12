#include "Student.h"
#include "Teacher.h"

int main()
{
	Student std("Jack Jack");
	std.setName("Jack Jack 2");
	std::cout << std.getName() << std::endl;

	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. K");
	std::cout << teacher1.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.doNothing();
	teacher1.doNothing();

	std.study();
	teacher1.teach();

	return 0;
}