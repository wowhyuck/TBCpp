#include <iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;
		if (ch == 'b')
			break;				// exit a loop

		if (ch == 'r')
			return;				// exit a function
	}

	cout << "Hello" << endl;
}

int main()
{
	/* break */
	//int count = 0;
	//while (true)
	//{
	//	cout << count << endl;
	//	if (count == 10) break;
	//	count++;
	//}
	//cout << endl;

	//breakOrReturn();

	/* continue */
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i % 2 == 0) continue;

	//	cout << i << endl;
	//}
	//cout << endl;

	//int count(0);
	//do
	//{
	//	if (count == 5) continue;

	//	cout << count << endl;
	//} while (++count < 10);

	/*-------------------------------------------*/
	int count(0);

	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'x')
			break;

		cout << ch << " " << count++ << endl;
	}

	return 0;
}