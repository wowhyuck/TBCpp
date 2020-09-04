#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double	height = 3.0;
	float	weight = 200.0;
	int		age = 100;
	string	name = "Mr. Incredible";

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

Person getMe()
{
	Person me{ 2.0, 98.9f, 20, "Jack Jack" };

	return me;
}

/*-----------------------------------------*/

struct Employee				// 2 + (2) + 4 + 8 = 16 bytes		// padding
{
	short	id;				// 2 bytes
	int		age;			// 4 bytes
	double	wage;			// 8 bytes
};






int main()
{
	Person me{ 2.0, 98.9f, 20, "Jack Jack" };
	me.print();

	Person me2(me);
	me2.print();

	Person me_from_func = getMe();
	me_from_func.print();
	cout << endl;

	/*-----------------------------------------*/
	Employee emp1;
	cout << sizeof(emp1) << endl;

	return 0;
}