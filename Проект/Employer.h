#pragma once
#include <string>

using namespace std;

class Employer
{
public:
	int GetSalary();

	void SetSalary(int num);
protected:
	int salary=0;
};
