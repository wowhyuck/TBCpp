#include <iostream>
#include "Monster.h"

using namespace std;


int main()
{
	Monster mon1("Sanson", Position2D(0, 0));

	//while (1)		// game loop
	{
		// event
		mon1.moveTo(Position2D(1, 1));
		cout << mon1 << endl;
	}

	return 0;
}