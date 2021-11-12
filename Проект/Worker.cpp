#include "Worker.h"

Worker::Worker(int num)
	:name("Sergei"),surname("Skrep"),age(52)
{
	project = nullptr;
	count++;
	salary = rand()%2500+2001;
	Id = count;
	size = num;
	bonus = 0;
	if (size > 0)
	{
		array = new int[size];
	}
	else
	{
		cout << endl << "can`t create minus array(size of its array`ll be 1)";
		size = 1;
		array = new int[size];
	}
}

Worker::Worker()
	:name("Sergei"), surname("Skrep"), age(52)
{
	bonus = 0;
	project = nullptr;
	count++;
	salary = rand() % 2500 + 2001;
	Id = count;
	size = 5;
	array = new int[size];
}

Worker::~Worker()
{
	delete[] array;

	cout << endl<< "Робота деструктора Worker" << endl;
}

void Worker::WriteToFile(string path)
{
	if (project == nullptr)
	{
		cout << "Нічого записувати";
		return;
	}

	try
	{
		if (path == "")throw"cant set the path of the file";
	}
	catch (const char* exception)
	{
		cout <<endl<< "Error: " << exception;
	}




	cout << endl << "Функц1я запису об'єкта до файлу.... " << endl;
	ofstream out(path + ".DAT", ios::binary);



	out.write((char*)&project, sizeof(project));



	out.close();
}

void Worker::ReadFromFile(const string path)
{
	cout << endl << "Функц1я зчитування з файлу.... " << endl;
	ifstream in(path + ".DAT", ios::binary);
	in.read((char*)&buffer, sizeof(project));
	in.close();

	this->buffer->Show();
}

void Worker::Show()
{
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

int Worker::GetId()
{
	return Id;
}

void Worker::SetProject(Project* project)
{
	this->project = project;
	ifWorking = true;
}

void Worker::Work()
{
	if(ifWorking)
	{
		if (pen.Work())
		{
			project->SetFields("Готовий проект", 24, 04);
			cout << endl << "Я працюю!";
		}
		else return;
	}
	else
	{
		cout << endl << "Робiтнику немає з чим працювати";
		return;
	}
	
}

void Worker::Say()
{
	cout <<endl<< "Я " << name << " " << surname << " Я мрiю стати менеджером";
}

Worker::Worker(const Worker& other)
{
	this->array = new int[other.size];
	this->size = other.size;
	for (size_t i = 0; i < other.size; i++)
	{
		this->array[i] = other.array[i];
	}
	this->age = other.age;
	this->name = other.name;
	this->buffer = other.buffer;
	this->project = other.project;
	this->bonus = other.bonus;
}

void Worker::operator=(const Worker &other)
{
	if (this->array != nullptr)
	{
		delete[] this->array;
	}

	this->array = new int[other.size];

	for (size_t i = 0; i < other.size; i++)
	{
		this->array[i] = other.array[i];
	}

	this->size = other.size;
}

Worker& Worker::operator++()
{
	this->age += 1;
	this->bonus = bonus + 5;
	this->salary = salary + 100;
	return *this;
}

Worker& Worker::operator++(int value)
{
	Worker temp(*this);
	this->age++;
	this->size += 1;
	return temp;
}

Worker& Worker::operator--()
{
	this->bonus -= 5;
	this->salary -= 100;
	return *this;
}

Worker& Worker::operator--(int value)
{
	Worker temp(*this);
	this->bonus = bonus - 5;
	this->salary -= 100;
	return temp;
}

Worker Worker::operator+(const Worker& other)
{
	Worker temp;
	temp.salary = this->salary + other.salary;
	return temp;
}

Worker Worker::operator-(const Worker& other)
{
	Worker temp;
	temp.salary = this->salary - other.salary;
	return temp;
}

Worker Worker::operator*(const Worker& other)
{
	/*int i;

	if (this->size < other.size)
	{
		Worker temp(other.size);
		for (i = 0; i < this->size; i++)
		{
			temp.array[i] = this->array[i] * other.array[i];
		}
		for (i; i < other.size; i++)
		{
			temp.array[i] = other.array[i];
		}
		return temp;
	}
	else if (other.size < this->size)
	{
		Worker temp(this->size);
		for (i = 0; i < other.size; i++)
		{
			temp.array[i] = this->array[i] * other.array[i];
		}
		for (i; i < this->size; i++)
		{
			temp.array[i] = this->array[i];
		}
		return temp;
	}
	Worker temp(this->size);
	for (i = 0; i < this->size; i++)
	{
		temp.array[i] = this->array[i] * other.array[i];
	}
	return temp;*/
	Worker temp;
	temp.salary = this->salary * other.salary;
	return temp;
}

Worker& Worker::operator+=(const Worker& other)
{
	//int i;
	//if (this->size < other.size)
	//{
	//	for (i = 0; i < this->size; i++)
	//	{
	//		this->array[i] +=other.array[i];
	//	}
	//	for (i; i < other.size; i++)
	//	{
	//		this->array[i] = other.array[i];
	//	}
	//	return *this;
	//}
	//else if (other.size < this->size)
	//{
	//	for (i = 0; i < other.size; i++)
	//	{
	//		this->array[i] += other.array[i];
	//	}
	//	for (i; i < this->size; i++)
	//	{
	//		this->array[i] = this->array[i];
	//	}
	//	return *this;
	//}
	//for (i = 0; i < this->size; i++)
	//{
	//	this->array[i] +=other.array[i];
	//}
	//return *this;

	this->salary += other.salary;;
	return *this;

}

Worker& Worker::operator-=(const Worker& other)
{
	/*int i;
	if (this->size < other.size)
	{
		for (i = 0; i < this->size; i++)
		{
			this->array[i] -= other.array[i];
		}
		for (i; i < other.size; i++)
		{
			this->array[i] = other.array[i];
		}
		return *this;
	}
	else if (other.size < this->size)
	{
		for (i = 0; i < other.size; i++)
		{
			this->array[i] -= other.array[i];
		}
		for (i; i < this->size; i++)
		{
			this->array[i] = this->array[i];
		}
		return *this;
	}
	for (i = 0; i < this->size; i++)
	{
		this->array[i] -= other.array[i];
	}
	return *this;*/

	this->salary -= other.salary;;
	return *this;
}

Worker& Worker::operator*=(const Worker& other)
{
	/*int i;
	if (this->size < other.size)
	{
		for (i = 0; i < this->size; i++)
		{
			this->array[i] *= other.array[i];
		}
		for (i; i < other.size; i++)
		{
			this->array[i] = other.array[i];
		}
		return *this;
	}
	else if (other.size < this->size)
	{
		for (i = 0; i < other.size; i++)
		{
			this->array[i] *= other.array[i];
		}
		for (i; i < this->size; i++)
		{
			this->array[i] = this->array[i];
		}
		return *this;
	}
	for (i = 0; i < this->size; i++)
	{
		this->array[i] *= other.array[i];
	}
	return *this;*/

	this->salary *= other.salary;
	return *this;
}


int& Worker::operator[](int index)
{
	return array[index];
}

bool Worker::operator==(const Worker& other)
{
	return this->salary==other.salary;
}

bool Worker::operator!=(const Worker& other)
{
	return !(this->salary == other.salary);
}

bool Worker::operator>(const Worker& other)
{
	return this->salary > other.salary;
}

bool Worker::operator<(const Worker& other)
{
	return this->salary < other.salary;
}

bool Worker::operator<=(const Worker& other)
{
	return this->salary <= other.salary;
}

bool Worker::operator>=(const Worker& other)
{
	return this->salary >= other.salary;
}









void Worker::Execute()
{
	cout <<endl<< "Робота віртуальної функцiї робiтника: ";

	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand()%10;
		cout << array[i] << " ";
	}


}

string Worker::GetNationality()
{
	return nationality;
}




int Worker::count = 0;

string Worker::nationality = "Ukrainian";