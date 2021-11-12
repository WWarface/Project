#pragma once
#include <iostream>
#include <string>

using namespace std;

class Project
{
public:

	void SetProject();

	Project GetProject();

	void operator=(const Project& other);

	void SetFields(string text,int day,int month);

	int GetDay();

	void Show();


private:
	string project;
	int day;
	int month;
};

