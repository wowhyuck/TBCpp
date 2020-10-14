#pragma once
#include <iostream>

template <typename T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{
	}

	void print()
	{
		std::cout << m_value << std::endl;
	}
};

template <>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << m_value << std::endl;
}
