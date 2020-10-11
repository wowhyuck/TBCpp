#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"


int main()
{
	using namespace std;


	// TODO: implement Aggregation Relationship

	Student *std1 = new Student("Jack Jack", 0);
	Student *std2 = new Student("Dash", 1);
	Student *std3 = new Student("Violet", 2);

	Teacher *teacher1 = new Teacher("Prof. Hong");
	Teacher *teacher2= new Teacher("Prof. Good");

	Lecture lec1("Introduction of Computer Programming");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);

	// test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}

	// TODO: class HobbyClub

	// TODO: delete memory (if necessary)
	delete std1;
	delete std2;
	delete std3;

	delete teacher1;
	delete teacher2;

	return 0;
}