#include "Pen.h"
#include <iostream>

Pen::Pen()
	:capacity(100)
{
}

void Pen::RefillPen()
{
	capacity = 100;
}

bool Pen::Work()
{
	if (capacity <= 0)
	{
		cout <<endl<< "Закінчилась паста в ручці";
		return false;
	}
	else
	{
		int num;
		num =20;
		capacity -= num;
		return true;
	}
}

int Pen::GetCapacity()
{
	return capacity;
}
