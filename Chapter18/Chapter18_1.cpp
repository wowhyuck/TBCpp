#include <iostream>
#include <string>
#include <iomanip>			// input/output mainpulators

using namespace std;


int main()
{
	//char buf[5];

	//cin >> setw(5) >> buf;
	//cout << buf << endl;		// '\0' is contained at last position

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	/*---------------------------------*/

	//char ch;
	//while (cin >> ch)			// not allow space characters
	//{
	//	cout << ch;
	//}

	//while (cin.get(ch))		// allow space characters
	//{
	//	cout << ch;
	//}

	/*---------------------------------*/

	//char buf[100];

	//cin.get(buf, 100);
	//cout << cin.gcount() << " " << buf << endl;

	//cin.getline(buf, 100);
	//cout << cin.gcount() << " " << buf << endl;

	/*---------------------------------*/

	//string buf;

	//getline(cin, buf);
	//cout << cin.gcount() << " " << buf << endl;

	/*---------------------------------*/

	//char buf[1024];

	//cin.ignore(2);

	//cin >> buf;
	//cout << buf << endl;

	/*---------------------------------*/

	char buf[1024];

	//cout << (char)cin.peek() << endl;

	cin >> buf;
	cout << buf << endl;

	cin.unget();

	cin >> buf;
	cout << buf << endl;

	cin.putback('A');

	cin >> buf;
	cout << buf << endl;

	return 0;
}