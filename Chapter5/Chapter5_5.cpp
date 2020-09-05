#include <iostream>

using namespace std;


int main()
{
	cout << "While-loop test" << endl;

	/* 5.5 while */
	int count = 0;
	while (count <100)
	{
		if (count % 5 == 0) 
			cout << "Hello " << count << endl;
		count++;
	}
	cout << endl;

	int outer_count = 1;
	while (outer_count < 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		outer_count++;
	}


	/* 5.6 do while */
	//int selection;		// must be declared outside do-while loop

	//do
	//{
	//	cout << "1. add" << endl;
	//	cout << "2. sub" << endl;
	//	cout << "3. mult" << endl;
	//	cout << "4. div" << endl;
	//	cin >> selection;
	//} while (selection <= 0 || selection >= 5);

	//cout << "You selected " << selection << endl;

	return 0;
}

