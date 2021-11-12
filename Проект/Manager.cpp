#include "Manager.h"

Manager::Manager():Human("Max", "Nimirof", 54)
{
	SetSalary(3000);
	weight = 54;
	SetHairColor("pink");
	ChangeHeight(180);
}

Manager::Manager(string M_name, string M_surname, int M_age):Human(M_name,M_surname,M_age)
{
	SetSalary(5000);
}

void Manager::SetProject(Project* M_project)
{
	project=M_project;
	cout << endl << "Менеджер отримав проект";
}

void Manager::SendOffer(Team& team)
{
	
	team.SetMission(project);
	cout << endl << "Вiдправлення командi";
}

void Manager::SetSalaryW(Worker& worker,int num)
{
	worker.SetSalary(num);
}

void Manager::SetHairColor(string text)
{
	HairColor = text;
}

void Manager::Say()
{
	cout <<endl<< "Я " << this->GetName() << " " << this->GetSurname() << " I я мрiю стати замовником";
}

void Manager::Execute()
{
	cout << endl << "Вiртуальний метод менеджера"<<endl;
	if (project == nullptr)cout << endl << "Проект пустий";
	else project->Show();
}


