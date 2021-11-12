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
	cout << endl << "Проект був відправленний";
	manager.SetProject(project);
}

void Customer::Say()
{
	cout << endl << "Я замовник " << Human::GetName() << " " << Human::GetSurname() << " ,I я мрiю стати робiтником";
}

void Customer::Execute()
{
	cout <<endl<< "Віртуальний метод замовника";
	cout << endl << "Заповнення ручки замовника сягає " << pen.GetCapacity() << "%";
}
