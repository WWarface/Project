#include "Customer.h"

Customer::Customer(string C_name, string C_surname, int C_age)
	:Human(C_name,C_surname,C_age)
{
}

Customer::Customer()
	:Human("Kolya","Zamovnik", 21)
{
}

void Customer::CreateOffer(Project& project)
{
	project.SetProject();
	this->project = &project;
}

void Customer::SendOffer(Manager& manager)
{
	cout << endl << "������ ��� ������������";
	manager.SetProject(project);
}

void Customer::Say()
{
	cout << endl << "� �������� " << Human::GetName() << " " << Human::GetSurname() << " ,I � ��i� ����� ���i������";
}

void Customer::Execute()
{
	cout <<endl<< "³��������� ����� ���������";
	cout << endl << "���������� ����� ��������� ���� " << pen.GetCapacity() << "%";
}
