#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object
// Friend : name, address, age, height, weight, ...
//			print()


class Friend
{
public:		// access specifier (public, private, protected)
	string m_name;			// member
	string m_address;
	int m_age;
	double m_height;
	double m_weight;

	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " 
			<< m_height << " " << m_weight << endl;
	}
};


int main()
{
	Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 };		// instanciation, instance

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& element : my_friends)
		element.print();

	return 0;
}