#pragma once
#include <string>

using namespace std;

class Pen
{
public:
	Pen();
	void RefillPen();
	bool Work();
	int GetCapacity();

private:
	int capacity;
};

