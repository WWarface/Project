#pragma once
#include <iostream>
#include <string>
#include "Human.h"
#include "Project.h"
#include "Manager.h"
#include <vector>
#include "Pen.h"

using namespace std;

class Customer:public Human
{
public:
	Customer(string C_name, string C_surname, int C_age);

	Customer();

	void CreateOffer(Project &project);

	void SendOffer(Manager& manager);

	virtual void Say();

	virtual void Execute();

private:
	Project* project;
	Pen pen;
};

