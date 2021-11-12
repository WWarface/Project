#include "Team.h"

Team::Team(Worker* workers)
{
	this->workers = workers;
}

void Team::SetMission( Project* project)
{
	workers[count].SetProject(project);
	count++;
}

int Team::count = 0;
