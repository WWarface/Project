#include "Project.h"

void Project::SetProject()
{
	cout << "??????: ";
	cin >> project;
	cout <<endl<< "??(????): ";
	cin >> day;
	cout << endl << "??(̳????): ";
	cin >> month;
}

Project Project::GetProject()
{
	return *this;
}

void Project::operator=(const Project& other)
{
	this->day = other.day;
	this->month = other.month;
	this->project = other.project;
}

void Project::SetFields(string text, int day, int month)
{
	this->project = text;
	this->day = day;
	this->month = month;
}

int Project::GetDay()
{
	return day;
}

void Project::Show()
{
	cout << project << ", " << day << ", " << month << endl;
}


