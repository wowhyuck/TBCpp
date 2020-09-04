#include <iostream>
#include <typeinfo>
#include <string>

/* 4.7 */
//enum Color		// user-defined data type
//{
//	COLOR_BLACK,
//	COLOR_RED,
//	COLOR_BLUE,
//	COLOR_GREEN
//};


int main()
{
	using namespace std;

	/* 4.7 */
	//Color my_color = COLOR_BLACK;
	//cout << my_color << " " << COLOR_BLACK << endl;

	//int color_id = COLOR_RED;
	////Color my_col = 3;			// Error
	//Color my_col = static_cast<Color>(3);

	////cin >> my_col;			// Error
	//
	////int in_number;
	////cin >> in_number;

	////if (in_number == COLOR_BLACK) my_col = COLOR_BLACK;
	//// ...

	//string str_input;
	//if (str_input == "COLOR_BLACK") my_col = COLOR_BLACK;


	/* 4.8 */
	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;

	if (color1 == color2)
		cout << "Same color" << endl;



	return 0;
}