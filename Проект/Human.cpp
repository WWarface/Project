#include "Human.h"

Human::Human(string h_name, string h_surname, int h_age)
	:name(h_name), surname(h_surname), age(h_age)
{

}

Human::Human()
	: name("Petro"), surname("Mostavchuk"), age(54)
{
	cout << endl << "конструктор human" << endl;
}

Human::~Human()
{
	cout << endl << "Вiртуальний деструктор human" << endl;
}

string Human::GetName()
{
	return name;
}

string Human::GetSurname()
{
	return surname;
}

int Human::GetAge()
{
	return age;
}

void Human::SetName(string text)
{
	this->name = text;
}

void Human::SetSurname(string text)
{
	this->surname = text;
}

void Human::SetAge(int num)
{
	this->age = age;
}




