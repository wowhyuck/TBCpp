#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// Bit flags

	/*
	bool itme1_flag = false;
	bool itme2_flag = false;
	bool itme3_flag = false;
	bool itme4_flag = false;
	...
	*/

	//const unsigned char opt0 = 1 << 0;
	//const unsigned char opt1 = 1 << 1;
	//const unsigned char opt2 = 1 << 2;
	//const unsigned char opt3 = 1 << 3;
	//// opt4, 5, 6, 7

	//cout << bitset<8>(opt0) << endl;
	//cout << bitset<8>(opt1) << endl;
	//cout << bitset<8>(opt2) << endl;
	//cout << bitset<8>(opt3) << endl;
	//cout << endl;

	//unsigned char items_flag = 0;
	//cout << "No item\t\t " << bitset<8>(items_flag) << endl;

	//// item0 on
	//items_flag |= opt0;
	//cout << "Item0 obtained\t " << bitset<8>(items_flag) << endl;

	//// item3 on
	//items_flag |= opt3;
	//cout << "Item3 obtained\t " << bitset<8>(items_flag) << endl;

	//// item3 lost
	//items_flag &= ~opt3;
	//cout << "Item3 lost\t " << bitset<8>(items_flag) << endl;
	//cout << endl;

	//// has item1 ?
	//if (items_flag & opt1) { cout << "Has item1" << endl; }
	//else { cout << "Not have item1" << endl; }

	//// has item0 ?
	//if (items_flag & opt0) { cout << "Has item0" << endl; }
	//cout << endl;

	//// obtain item 2, 3
	//items_flag |= (opt2 | opt3);
	//cout << bitset<8>(opt2 | opt3) << endl;
	//cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl;

	//if ((items_flag & opt2) && !(items_flag & opt1))
	//{
	//	items_flag ^= opt2;
	//	items_flag ^= opt1;
	//}
	//cout << bitset<8>(items_flag) << endl;


	// Bit masks

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << bitset<32>(red_mask) << endl;
	cout << bitset<32>(green_mask) << endl;
	cout << bitset<32>(blue_mask) << endl;
	cout << endl;

	unsigned int pixel_color = 0xDAA520;			// rgb = (218, 165, 32)
	cout << bitset<32>(pixel_color) << endl;
	cout << endl;

	unsigned char red = (pixel_color & red_mask) >> 16;
	unsigned char green = (pixel_color & green_mask) >> 8;
	unsigned char blue = pixel_color & blue_mask;

	cout << bitset<8>(red) << " " << int(red) << endl;
	cout << bitset<8>(green) << " " << int(green) << endl;
	cout << bitset<8>(blue) << " " << int(blue) << endl;

	return 0;
}

