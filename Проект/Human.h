#pragma once
#include <iostream>
#include <string>



using namespace std;

class Human
{
public:
	Human(string name, string surname, int age);

	Human();

	virtual ~Human();

	string GetName();

	string GetSurname();

	int GetAge();

	virtual void Say() = 0;

	virtual void Execute() = 0;

	void SetName(string text);

	void SetSurname(string text);

	void SetAge(int num);

private:
 string name;
 string surname;
	int age;
};

