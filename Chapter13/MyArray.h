#pragma once

#include <assert.h>		// for assert()
#include <iostream>

//template<typename T>
//class MyArray
//{
//private:
//	int m_length;
//	T*	m_data;
//
//public:
//	MyArray()
//	{
//		m_length = 0;
//		m_data = nullptr;
//	}
//
//	MyArray(int length)
//	{
//		m_data = new T[length];
//		m_length = length;
//	}
//
//	~MyArray()
//	{
//		reset();
//	}
//
//	void reset()
//	{
//		delete[] m_data;
//		m_data = nullptr;
//		m_length = 0;
//	}
//
//	T& operator[] (int index)
//	{
//		assert(index >= 0 && index < m_length);
//		return m_data[index];
//	}
//
//	int getLength()
//	{
//		return m_length;
//	}
//
//	void print();
//};
//

/* 13. 3*/

template<typename T, unsigned int T_SIZE>
class MyArray
{
private:
	T* m_data;

public:
	MyArray()
	{
		m_data = new T[T_SIZE];
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator[] (int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		for (int i = 0; i < T_SIZE; i++)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};
