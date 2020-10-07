#include <iostream>
#include "Calc.h"


int main()
{
	Calc cal(10);

	cal.add(10).sub(1).mult(2).print();

	return 0;
}