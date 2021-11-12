#pragma once
#include <string>
#include "Human.h"
#include "Project.h"
#include "Team.h"
#include "Employer.h"
#include "appearance.h"

using namespace std;

class Manager:public Human,public Employer,public Appearance
{
public:
	Manager();
	Manager(string M_name, string M_surname, int M_age);

	void SetProject(Project* project);

	void SendOffer(Team& team);

	void SetSalaryW(Worker& worker,int num);

	void SetHairColor(string text);

	virtual void Say();

	virtual void Execute();

private:

	Project* project;

};

