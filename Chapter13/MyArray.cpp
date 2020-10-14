#include "MyArray.h"

template<typename T>
inline void MyArray<T>::print()
{
	for (int i = 0; i < m_length; i++)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

// explicit instantiation

template class MyArray<char>;
template class MyArray<double>;
template class MyArray<int>;

//template void MyArray<int>::print();
//template void MyArray<double>::print();