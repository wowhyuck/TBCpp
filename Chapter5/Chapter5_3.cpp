#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
	case 1:
		cout << "White" << endl;
		break;
	case 2:
		cout << "Red" << endl;
		break;
	case 3:
		cout << "Green" << endl;
		break;
	case 4:
		cout << "Blue" << endl;
		break;
	}
}


int main()
{
	printColorName(Colors::BLACK);

	int x;
	cin >> x;

	switch (x)
	{
		int a;					// Can declaration before or after case.
								// And, declarations in switch are located before case when compiling.
		//int b = 5;			// Cannot initialization or assignment before case.
								// However, can initialization or assignment after case.
	case 0:
		int y;
		break;

	case 1:
		y = 5;
		cout << y << endl;
		break;

	default:
		cout << "Undefined input " << x << endl;
	}

	return 0;
}
