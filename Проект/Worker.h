#pragma once
#include "Project.h"
#include <string>
#include "Human.h"
#include <fstream>
#include "Pen.h"
#include "Employer.h"


using namespace std;
class Human;


class Worker:virtual public Human,public Employer
{
public:
	template <typename T>

	T sum(T a, T b);

	static int count;


	Worker(int num);

	Worker();

	virtual ~Worker();

	void WriteToFile(const string path);

	void ReadFromFile(const string path);

	void Show();

	int GetId();

	void SetProject(Project* project);
	
	void Work();

	void Say();

	Worker(const Worker& other);

	void operator=(const Worker& other);

	Worker& operator++();

	Worker& operator++(int value);

	Worker& operator--();

	Worker& operator--(int value);

	Worker operator+(const Worker& other);

	Worker operator-(const Worker& other);

	Worker operator*(const Worker& other);

	Worker& operator+=(const Worker& other);

	Worker& operator-=(const Worker& other);

	Worker& operator*=(const Worker& other);

	int& operator[](int index);

	bool operator==(const Worker& other);

	bool operator!=(const Worker& other);

	bool operator>(const Worker& other);

	bool operator<(const Worker& other);

	bool operator<=(const Worker& other);

	bool operator>=(const Worker& other);

	virtual void Execute();

	static string GetNationality();

private:
	string name;
	string surname;
	int age;

	int size;

	int bonus;

	int *array;

	Pen pen;

	static string nationality;

	bool ifWorking=false;
	int Id;

	Project *project;

	Project *buffer;
};

template<typename T>
inline T Worker::sum(T a, T b)
{
	return a+b;
}
