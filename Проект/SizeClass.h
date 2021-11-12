#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;

template<typename T>

class SizeClass
{
public:
	SizeClass(T value);

	void ShowSize();

	T GetValue();

private:
	T value;
};

template<typename T>
SizeClass<T>::SizeClass(T value)
{
	this->value = value;
}

template<typename T>
inline void SizeClass<T>::ShowSize()
{
	cout << endl << "size of value:" << sizeof(value);
}

template<typename T>
T SizeClass<T>::GetValue()
{
	return value;
}

