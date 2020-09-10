#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	//char myString[255];

	////cin >> myString;
	//cin.getline(myString, 255);

	////cout << myString;

	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0') break;
	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	ix++;
	//}

	/*---------------------------------------------------------*/

	char source[] = "Copy this!";
	char dest[50];
	//strcpy(dest, source);
	strcpy_s(dest, 50, source);

	//cout << source << endl;
	//cout << dest << endl;
	//cout << endl;

	/* strcat() */
	strcat_s(dest, source);
	cout << source << endl;
	cout << dest << endl;
	cout << endl;

	/* strcmp() */
	cout << strcmp(dest, source) << endl;	// same : 0, (first < second) : -1 , (first > second) : 1

	return 0;
}