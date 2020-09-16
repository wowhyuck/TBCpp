#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;

	if (count > 0)
		countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int fibonacci(int num)
{
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return fibonacci(num - 2) + fibonacci(num - 1);

}


int main()
{
	countDown(5);

	/*-------------*/

	cout << sumTo(10) << endl;

	/*-------------*/
	// 0 1 1 2 3 5 8 13 21 ...
	cout << fibonacci(8) << endl;

	return 0;
}