#pragma once
#include <string>
#include "Project.h"
#include "Worker.h"

using namespace std;
class Worker;


class Team
{
public:
	static int count;

	Team(Worker *workers);

	void SetMission( Project* project);



private:
	Worker* workers;
};
