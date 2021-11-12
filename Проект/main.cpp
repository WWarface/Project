#include <iostream>
#include <string>
#include "Customer.h"
#include "Office.h"
#include "SizeClass.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	//Project project;
	//Manager Ivan;
	//Office office;
	//Worker *Workers = new Worker[5];
	//Team Spirt(Workers);
	//Customer Person("vals","saas",24);
	//Person.CreateOffer(project);
	//office.CreateOffer(Ivan, Person);
	//Ivan.execute(Spirt);
	//Workers[0].Work();
	//cout <<endl<< "Робiтник №" << Workers[2].GetId() << " " << Worker::GetNationality() << endl;
	//Workers[0].WriteToFile("info");
	//Workers[0].ReadFromFile("info");
	//delete[] Workers;

	//int num;
	//cin >> num;
	//try
	//{
	//	if (num <= 0)throw - 1;
	//}
	//catch (int value)
	//{
	//	cout << endl << "Error #" << value << "cant create array which is opposite size, the value is changed to 1" << endl;
	//	num = 1;
	//}
	//Project project;
	//Worker *worker=new Worker(num);
	//Customer customer;
	//customer.CreateOffer(project);
	//Manager manager;
	//customer.SendOffer(manager);
	//worker->SetProject(&project);
	////Пізнє зв'язування
	//Human* poly_human;
	//poly_human = worker;
	//poly_human->Execute();
	////////////////////
	//poly_human = (Human *) &manager;
	//poly_human->Execute();
	////////////////////////
	//poly_human = (Human*)&customer;
	//poly_human->Execute();
	////раннє
	//Employer* empl;
	//empl = &manager;
	//cout << endl << empl->GetSalary();

	Worker Nikita(7);
	Worker Oleg(2);

	Nikita.Execute();
	Oleg.Execute();

	Oleg = Nikita;

	Worker max(2);

	max =Nikita+Oleg;

	max.Show();

	max =Oleg-Nikita;

	max.Show();

	cout<<endl << max[5];

	cout << endl << max.sum(2.4, 4.5);

	SizeClass<Worker> SC(Nikita);

	SC.ShowSize();

}