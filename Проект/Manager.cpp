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
	cout << endl << "�������� ������� ������";
}

void Manager::SendOffer(Team& team)
{
	
	team.SetMission(project);
	cout << endl << "�i���������� ������i";
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
	cout <<endl<< "� " << this->GetName() << " " << this->GetSurname() << " I � ��i� ����� ����������";
}

void Manager::Execute()
{
	cout << endl << "�i��������� ����� ���������"<<endl;
	if (project == nullptr)cout << endl << "������ ������";
	else project->Show();
}


