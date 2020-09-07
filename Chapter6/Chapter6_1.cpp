#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,		// = 0
	DASH,			// = 1
	VIOLET,			// = 2
	NUM_STUDENTS	// = 3
};

void doSomething(int students_scores[20])				// This parameter is pointer, not array.
{
	cout << (unsigned int)&students_scores << endl;
	cout << (unsigned int)&students_scores[0] << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in doSomething " << sizeof(students_scores) << endl;
}


int main()
{
	//int one_student_score;		// 1 variable
	//int students_score[5];		// 5 int

	//one_student_score = 100;

	//students_score[0] = 100;	// 1st element
	//students_score[1] = 80;		// 2nd element
	//students_score[2] = 90;		// 3rd element
	//students_score[3] = 50;		// 4th element
	//students_score[4] = 0;		// 5th element

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << students_score[i] << endl;
	//}
	//cout << endl;

	///*-----------------------------------------*/

	//cout << sizeof(Rectangle) << endl;

	//Rectangle rect_arr[10];

	//cout << sizeof(rect_arr) << endl;

	//rect_arr[0].length = 1;
	//rect_arr[0].width = 2;
	//cout << endl;

	///*-----------------------------------------*/

	//int students_scores[NUM_STUDENTS];
	//students_scores[JACKJACK] = 0;
	//students_scores[DASH] = 100;


	/* 6.2 */
	const int num_students = 20;

	int students_scores[num_students] = { 1, 2, 3, 4, 5, };

	cout << (unsigned int)students_scores << endl;
	cout << (unsigned int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in main " << sizeof(students_scores) << endl;
	cout << endl;

	doSomething(students_scores);












	return 0;
}