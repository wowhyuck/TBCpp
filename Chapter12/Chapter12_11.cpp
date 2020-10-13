#include <iostream>

class Base
{
public:
	Base()	{}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		return b.print(out);
	}

	virtual std::ostream& print(std::ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived () {}

	virtual std::ostream& print(std::ostream& out) const override
	{
		out << "Derived";
		return out;
	}
};


int main()
{
	Base b;
	std::cout << b << "\n";

	Derived d;
	std::cout << d << "\n";		// note that this works even with no operator << that explicitly handles Derived

	Base& bref = d;
	std::cout << bref << "\n";

	return 0;
}