#include <iostream>

using namespace std;

int min(int x, int y)
{
	if (x < y)	
		return x;
	else		
		return y;
	//return (x < y) ? x : y;
}


int main()
{
	int x, y;
	cin >> x >> y;

	if (x > 10)
	{
		cout << x << " is greater than 10." << endl;
		cout << endl;
	}
	else
	{
		cout << x << " is not greater than 10." << endl;
		cout << endl;
	}

	if (x > 0 && y > 0)
		cout << "both numbers are positive." << endl;
	else if (x > 0 || y > 0)
		cout << "one of the numbers is positive." << endl;
	else
		cout << "Neither number is positive." << endl;

	return 0;
}